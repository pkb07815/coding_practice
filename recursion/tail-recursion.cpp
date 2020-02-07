#include<iostream>

using namespace std;

void print(int n) 
{ 
    if (n < 0)  return; 
    cout << " " << n; 
  
    // The last executed statement is recursive call 
    print(n-1); 
} 


int main()
{

    int i=10;

    print(i);
}