#include <iostream>
using namespace std;
int main()
{int x,y;
cin>>x>>y;
if (y%2==0 and y/2==x or (y%4==0 and y/4==x))cout<<"YES";
else{
if(x>y/4 and x<=y/4*2)cout<<"YES";
else cout<<"NO";
}}
