#include<iostream>

using namespace std;

void rev(char *str)
{

int i=0;
int len=strlen(str)-1;
//char tmp[20];

while(len > i)
{

    if(str[i++] != str[len--])
    {
        cout << str << " is not a palindrome" << endl;
        return;
    }
}

   cout << str << " is  a palindrome" << endl;
}

int main()
{

    char str[20]="nayan";

    rev(str);

cout << str <<endl;

}