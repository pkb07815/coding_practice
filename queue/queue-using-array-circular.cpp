/* C++ program to implement basic stack 
   operations */
#include <iostream> 
  
using namespace std; 
  
#define MAX 10 
  
class Queue { 
    int front;
    int rear;
  
public: 
    int a[MAX]; // Maximum size of Queue
  
    Queue() { front = -1; rear = -1;} 
    bool enqueue(int x); 
    int dequeue(); 
    int peek(); 
    bool isEmpty(); 
}; 
  
bool Queue::enqueue(int x) 
{ 

    if (((rear+1)% MAX) == front) { 
        cout << "Queue Overflow"; 
        return false; 
    } 

    else if (isEmpty()){
    rear=0;
    front=0;
    a[rear]=x;
   cout << x << " pushed into queue\n"; 
        return true; 
 
    }
    else {
        rear=(rear+1)%MAX; 
        a[rear] = x; 
        cout << x << " pushed into queue\n"; 
        return true; 
    }
    
} 
  
int Queue::dequeue() 
{ 
     if (front < 0 && rear <0 ) { 
        cout << "Stack Underflow"; 
        return 0; 
    } 
    else if (front == rear )
    {

    int x = a[front]; 
    front = rear = -1;
    return x;
    }
    else { 
        front=(front+1)%MAX;
        int x = a[front++]; 
        return x; 
    } 
} 

int Queue::peek() 
{ 
return 0;
} 
  
bool Queue::isEmpty() 
{ 
    if (front == -1 && rear == -1)
    return true;
    else
    return false;
    
  
} 
  
// Driver program to test above functions 
int main() 
{ 
    class Queue q; 
    q.enqueue(10); 
    q.enqueue(20); 
    q.enqueue(30); 
    cout << q.dequeue() << " Popped from queue\n"; 
    cout << q.dequeue() << " Popped from queue\n"; 
    cout << q.dequeue() << " Popped from queue\n"; 
  
    return 0; 
} 