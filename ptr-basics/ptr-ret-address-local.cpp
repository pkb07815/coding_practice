#include<iostream>

using namespace std;

int *fun();

int *fun()
{
int i=20;

cout<<"address of local variable in original function" << &i<<endl;
return(&i);
}

int main()
{

int *p;
p=fun();

cout<<" value of ptr in main" <<p<<" value of *ptr "<<*p<<endl;



}