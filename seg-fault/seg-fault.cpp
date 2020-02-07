/* C++ program to implement basic stack 
   operations */
#include <iostream> 
  
using namespace std;
  
// Driver program to test above functions 
int main() 
{ 

// method 1
//int *ptr=NULL;

//ptr=(int *)malloc(sizeof(int));
// *ptr=5;

// printf("%d",*ptr);

//method 2
 // int* p = (int *) malloc(8); 
   // *p = 100; 
      
    // deallocated the space allocated to p 
  //  free(p); 
      
    // core dump/segmentation fault 
    //  as now this statement is illegal 
   // *p = 110; 

    // method 3

 //    int *p=NULL; 
 //    *p=5;
 //  printf("%d",*p); 
  

  // method 4

  char *str="GfG";  
  
   /* Stored in read only part of data segment */
   //str = "GfG";      
  
  //str=str+1;
  //cout<<str<<endl;
   /* Problem:  trying to modify read only memory */
  *(str+1) = 'n';  
   
      
return 0; 
} 