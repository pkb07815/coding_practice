#include<iostream> 
using namespace std; 
  
const int MAX_CHAR = 26; 
  
// function to print jumping number
int sortString(int str) 
{ 

    
    int flag=0;
    while(str>0 && str>9)
    {
        int num1=str%10;
         str=str/10;
        int num2=(str)%10;

        if(abs(num1-num2)!=1 || (num1==9 && num2==0)  || (num1==0 && num2 ==9))
        {
            flag=1;
            return flag;
        }
            

           // str=str/10;
    }

   return flag;
} 
  
// Driver program to test above function 
int main() 
{ 
    int  s = 6781;     
    int flag=sortString(s);   
    if (flag==0)  
    cout <<"YES! it is a jumping number"<<endl;
    else
    {
        cout <<"No! it is not a jumping number"<<endl;
    }
    
    return 0; 
} 