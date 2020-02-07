// C program to find first non-repeating character 
#include<stdlib.h> 
#include<stdio.h> 
#include<string.h>



char * quickSort(char *arr) 
{ 
 
 int i=0;
 int j=0;
 int temp=0;

 int n=strlen(arr);
 for (i = 0; i < n-1; i++) {
      for (j = i+1; j < n; j++) {
         if (arr[i] < arr[j]) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            printf("%d %d\n",arr[i],arr[j]);
            printf("%c %c\n",arr[i],arr[j]);
         }
      }
 }
return arr;
} 



/* Driver program to test above function */
int main() 
{ 
  char arr[] = "BBBBBBWBBBBBBWBBBBWBBBBWW"; 
  char *str1;
  str1=quickSort(arr); 

   printf("%s",str1);
  
  return 0; 
} 