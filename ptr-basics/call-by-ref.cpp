#include<iostream>

using namespace std;





void fun(int *x,int *y)
{
int t;
cout<<" addr of x in fun " <<x<<" addr of y in fun "<<y<<endl;
cout<<" value of x in fun " <<*x<<" value of y in fun "<<*y<<endl;
t=*x;
*x=*y;
*y=t;
cout<<" addr of x in fun1 " <<x<<" addr of y in fun1 "<<y<<endl;
cout<<" value of x in fun1 " <<*x<<" value of y in fun1 "<<*y<<endl;
x++;
y++;
cout<<" addr of x in fun2 " <<x<<" addr of y in fun2 "<<y<<endl;
cout<<" value of x in fun2 " <<*x<<" value of y in fun2 "<<*y<<endl;
}
int main()
{
int a=10;
int b=20;
int *p;
int *q;
p=&a;
q=&b;
cout<<" addr of p in main-before " <<p<<" addr of q in main-before "<<q<<endl;
cout<<" value of p in main-before " <<*p<<" value of q in main-before "<<*q<<endl;
fun(p,q);
cout<<" addr of p in main " <<p<<" addr of q in main "<<q<<endl;
cout<<" value of p in main " <<*p<<" value of q in main "<<*q<<endl;
}