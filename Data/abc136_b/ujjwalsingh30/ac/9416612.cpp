#include <iostream>
#include <string>
using namespace std;
int main()
{
int n;
string s;
cin >> n;
s=to_string(n);
if(s.length()%2)
{
if(s.length()==1)
cout << n;
else if(s.length()==3)
cout << n-90;
else
cout << n-9090;
}
else
{
if(s.length()==2)
cout << "9";
else if(s.length()==4)
cout << "909";
else
cout << "90909";
}
return 0;
}
