#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{

map<int,string> m;

m[2]="pankaj";
m[1]="mishu";
m[0]="kurchi";

//m[2]="KURCHI";

map<int,string> ::iterator it;

for(it=m.begin();it!=m.end();it++)
cout <<it->first<< "::"<< it->second << endl;

m.clear();
}