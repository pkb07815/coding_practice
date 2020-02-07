#include <iostream> 
using namespace std; 
  
// Function to remove all spaces from a given string 
void removeSpaces(char *str) 
{ 
    // To keep track of non-space character count 
    int count = 0; 
int i=0;
    int numberofspaces=0;
  
    // Traverse the given string. If current character 
    // is not space, then place it at index 'count++' 
    for (i = 0; str[i]; i++) 
        if (str[i] != ' ') 
            str[count++] = str[i]; 
        else
            numberofspaces++;
                                // here count is 
                                   // incremented 
    str[count] = '\0'; 

    cout << numberofspaces <<endl;

   // char newstr[numberofspaces];

    char *newstr=NULL;
    newstr=(char *)malloc(sizeof(char)* 10); 

int j=0;
    for (j=0;j<=numberofspaces;j++)
    strcat(newstr," ");

   newstr[j]='\0';

    strcat(newstr,str);

    cout<<newstr<<endl;

} 
  
// Driver program to test above function 
int main() 
{ 
    char str[] = "g  eeks   for ge  eeks  "; 
    removeSpaces(str); 
    cout << str; 
    return 0; 
} 