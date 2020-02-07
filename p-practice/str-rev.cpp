#include<iostream>

using namespace std;

void rev(char *str)
{

int i=0,j=0;
int len=strlen(str);
char tmp[20];

for(i=len-1; i>=0; i--)
{
tmp[j++]=str[i];
}
tmp[i] = '\0';

cout <<tmp<< endl;

}

int main()
{

    char str[20]="pankaj";

    rev(str);

cout << str <<endl;

}