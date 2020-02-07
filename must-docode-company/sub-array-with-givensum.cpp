/* A simple program to print subarray  
with sum as given sum */
#include <iostream> 
#include<unordered_map>

using namespace std;  
  
/* Returns true if the there is a subarray  
of arr[] with sum equal to 'sum' otherwise  
returns false. Also, prints the result */
int subArraySum(int arr[], int n, int sum)  
{  
    
    // create an empty map 
    unordered_map<int, int> map; 
  
    // Maintains sum of elements so far 
    int curr_sum = 0; 
  
    for (int i = 0; i < n; i++) 
    { 
        // add current element to curr_sum 
        curr_sum = curr_sum + arr[i]; 
  
        // if curr_sum is equal to target sum 
        // we found a subarray starting from index 0 
        // and ending at index i 
        if (curr_sum == sum) 
        { 
            cout << "Sum found between indexes "
                 << 0 << " to " << i << endl; 
            return 1; 
        } 
  
        // If curr_sum - sum already exists in map 
        // we have found a subarray with target sum 
        if (map.find(curr_sum - sum) != map.end()) 
        { 
            cout << "Sum found between indexes "
                 << map[curr_sum - sum] + 1 
                 << " to " << i << endl; 
            return 1; 
        } 
  
        map[curr_sum] = i; 
    } 
  
    // If we reach here, then no subarray exists 
    cout << "No subarray with given sum exists"; 
    return 0;
}  
  
// Driver Code 
int main()  
{  
    int arr[] = {15, 2, 4, 8, 9, 5, 10, 23};  
    int n = sizeof(arr) / sizeof(arr[0]);  
    int sum = 17;  
    subArraySum(arr, n, sum);  
    return 0;  
}  
  
// This code is contributed 
// by rathbhupendra 
