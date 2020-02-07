#include<stdio.h>

int main() 
{ 
 char *str;  
 str = "GfG";     /* Stored in read only part of data segment */
 *str = 'p'; /* Problem:  trying to modify read only memory */

 return 0; 
} 