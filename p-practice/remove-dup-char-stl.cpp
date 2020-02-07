#include <iostream>
#include <unordered_map>

using namespace std;  
char* removeDuplicates(char *s,int n){ 
unordered_map<char,int> exists; 
  int index = 0;  
  int i=0;

  
  for(i=0;i<n;i++){ 

      cout << "BEFORE: string:: " << s[i] <<" value: " <<exists[s[i]]<<endl;
    if(exists[s[i]]==0) 
    { 
      s[index++] = s[i]; 
      exists[s[i]]++; 
      cout << "string:: " << s[i] <<" value: " <<exists[s[i]]<<endl;
    } 
  } 
  return s; 
} 
  
//driver code 
int main(){ 
  char s[] = "geeksforgeeks"; 
  int n = sizeof(s)/sizeof(s[0]); 
  cout<<removeDuplicates(s,n)<<endl; 
  return 0; 
} 