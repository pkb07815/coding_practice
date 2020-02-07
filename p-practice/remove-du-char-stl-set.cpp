#include <iostream>
#include <unordered_set>

using namespace std;  
char* removeDuplicates(char *arr,int n){ 

// declaring unordered sets for checking and storing 
    // duplicates 
    unordered_set<char> intSet; 
    unordered_set<char> duplicate; 
  
   int index=0;
    // looping through array elements 
    for (int i = 0; i < n; i++) 
    { 
        // if element is not there then insert that 
        if (intSet.find(arr[i]) == intSet.end()) 
        {
            intSet.insert(arr[i]); 
            arr[index++]=arr[i];
        }
        // if element is already there then insert into 
        // duplicate set 
        else
            duplicate.insert(arr[i]); 
    } 
  
    // printing the result 
    cout << "Duplicate item are : "; 
    unordered_set<char> :: iterator itr; 
  
    // iterator itr loops from begin() till end() 
    for (itr = duplicate.begin(); itr != duplicate.end(); itr++) 
        cout << *itr << " "; 

        return arr;
} 
  
//driver code 
int main(){ 
  char s[] = "geeksforgeeks"; 
  int n = sizeof(s)/sizeof(s[0]); 
  cout<<removeDuplicates(s,n)<<endl; 
  return 0; 
} 