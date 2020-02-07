// C program to find first non-repeating character 
#include<stdlib.h> 
#include<stdio.h> 
#include<string.h>

void swap(char *s1,char *s2 );

void swap(char *s1,char *s2 )
{

    int tmp;

    tmp=*s2;
    *s2=*s1;
    *s1=tmp;
}


char* firstNonRepeating(char *str) 
{ 
 
  int i=0;
  int j=0;

  for(i=0;i<strlen(str);i++)
  {

      for (j=i+1; j<=(strlen(str)-1);j++)
      {
      if(str[i]=='B' && str[j]=='W')
      swap(&str[i],&str[j]);
      else
      {
          continue;
      }
      
      }
  }
  return str;

} 

/* Driver program to test above function */
int main() 
{ 
  char str[] = "BBBBBBWBBBBBBWBBBBWBBBBWW"; 
  char *str1;
  str1 =  firstNonRepeating(str); 

  printf("return string is %s",str1);
  
  return 0; 
} 