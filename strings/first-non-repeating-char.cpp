// C program to find first non-repeating character 
#include<stdlib.h> 
#include<stdio.h> 
#define NO_OF_CHARS 256 
  
/* Returns an array of size 256 containg count 
   of characters in the passed char array */
int *getCharCountArray(char *str) 
{ 

    int *count =(int *)malloc(sizeof(int ) * NO_OF_CHARS );

    int i=0;
     int cnt=0;
    for(i=0;str[i];i++)
    {

        count[str[i]]++;
    }
   
   return count;
} 
  
/* The function returns index of first non-repeating 
   character in a string. If all characters are repeating  
   then returns -1 */
int firstNonRepeating(char *str) 
{ 
  int index=-1; 
  int i=0;
  int *count = getCharCountArray(str);

int k=0;
  for(i=0;str[i];i++)
  {
  
    if(count[str[i]]==1)
    {
    
     index=i;
     
    break;

    }


  }
  free(count);

  //if(k==2)
  return index;

  return 0; 
} 

/* Driver program to test above function */
int main() 
{ 
  char str[] = "geeksforgeeks"; 
  int index =  firstNonRepeating(str); 
  if (index == -1)   
    printf("Either all characters are repeating or string is empty"); 
  else
   printf("First non-repeating character is %c", str[index]); 
  
  return 0; 
} 