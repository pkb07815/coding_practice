#include <condition_variable>
#include <iostream>
#include <thread>

std::mutex mtx;
std::condition_variable condVar; 

bool dataReady= false;

bool func(){return dataReady == true;}

void waitingForWork(){
    std::cout << "Waiting " << std::endl;
    std::unique_lock<std::mutex> lck(mtx);
    condVar.wait(lck,func);
    std::cout << "Running " << std::endl;
}

void setDataReady(){
    {
        std::lock_guard<std::mutex> lck(mtx);
        dataReady = true;
    }
    std::cout << "Data prepared" << std::endl;
    condVar.notify_one();                        // (3)
}

int main(){
    
  std::cout << std::endl;

  std::thread t1(waitingForWork);               // (1)
  std::thread t2(setDataReady);                 // (2)

  t1.join();
  t2.join();
  
  std::cout << std::endl;
  
}