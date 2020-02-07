#include<iostream>

using namespace std;

int fact(int n)
{
    if (n <= 1) // base case
        return 1;
    else    
        return n*fact(n-1);    
}

int main()
{

int i=5;
int ret=0;

ret=fact(i);

cout << ret<<endl;

}