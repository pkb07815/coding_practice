#include<iostream>

using namespace std;

void encrypt(char *str)
{
int i=0;
    for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] + 3; //the key for encryption is 3 that is subtracted to ASCII value

      printf("\nDecrypted string: %s\n", str);
}

void decrypt(char *str)
{
int i=0;
    for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] - 3; //the key for encryption is 3 that is subtracted to ASCII value

      printf("\nDecrypted string: %s\n", str);
}


int main()
{
   int i, x;
   char str[100]="pankaj";

   

   encrypt(str);
   decrypt(str);
    
   
   return 0;
}

