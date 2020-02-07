// A Lomuto partition based scheme to segregate 
// even and odd numbers. 
#include <iostream> 
using namespace std; 
  
  void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}  
// function to rearrange the array in given way. 
void rearrangeEvenAndOdd(int arr[], int low, int high) 
{ 
   int pivot = arr[high]; // pivot  
    int i = (low - 1); // Index of smaller element  
  
    for (int j = low; j <= high - 1; j++)  
    {  
        // If current element is smaller than the pivot  
        if (arr[j] < pivot)  
        {  
            i++; // increment index of smaller element  
            swap(&arr[i], &arr[j]);  
        }  
    }  
    swap(&arr[i + 1], &arr[high]);  
} 
  
int main() 
{ 
    int arr[] = {11,25,89,75,32,98,110,99,100,94}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    rearrangeEvenAndOdd(arr, 0, n-1); 
  
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
}