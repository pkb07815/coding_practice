#include<iostream> 
using namespace std; 
  
const int MAX_CHAR = 26; 
  
// function to print string in sorted order 
int sortString(int str) 
{ 
    while(str>0)
    {
        int num1=str%10;
        int num2=(str%10)%10;

        if(abs(num1-num2)!=1 && ((num1==9 && num2==0)  || (num1==0 && num2 ==9)))
            return false;

            str=str/10;
    }

    return true;
} 
  
// Driver program to test above function 
int main() 
{ 
    int  s = 8989;     
    int flag=sortString(s);     
    cout <<"jumping number"<< flag<<endl;
    return 0; 
} 
