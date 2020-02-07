#include<iostream>

using namespace std;

int *fun(int *);

int main()
{
int i=20;

int *ptr;

ptr=&i;

cout<<"address of ptr in calling function" << ptr<<" value: "<<*ptr<<endl;

fun(ptr);

cout<<"POST: address of ptr in calling function" << ptr<<" value: "<<*ptr<<endl;




}

int *fun(int *ptr)
{
ptr=ptr+1;

cout<<" value of ptr in called fun" <<ptr<<" value of *ptr "<<*ptr<<endl;



}