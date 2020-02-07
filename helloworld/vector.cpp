#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{

vector< int > v;
for(int i = 10; i >= 1; i--) {
v.push_back(i);
}
int elements_count = v.size();
cout << elements_count <<endl;

vector <int> ::iterator i;

sort(v.begin(),v.end());


for(i =v.begin(); i!=v.end();i++)
cout << *i <<endl;

vector <string> str;
str.push_back("elephant");
str.push_back("bear");
str.push_back("donkey");
str.push_back("catty");
str.push_back("apple");


vector <string> ::iterator si;
sort(str.begin(),str.end(),greater<string>());

for(si = str.begin(); si!=str.end();si++)
cout << *si <<endl;

v.clear();
str.clear();
}