#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <functional>
#include <algorithm>

using namespace std;

template <typename T>
T myMax(T x, T y)
{
return (x > y)? x: y; 

}

int main()
{

cout << myMax<int>(3, 7) << endl;  // Call myMax for int 
cout << myMax<double>(3.0, 7.0) << endl; // call myMax for double 
cout << myMax<char>('g', 'e') << endl;   // call myMax for char 
  
return 0; 


}