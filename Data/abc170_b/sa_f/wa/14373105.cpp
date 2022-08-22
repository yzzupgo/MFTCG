#include<bits/stdc++.h>
using namespace std;
#define nl cout<<'\n';
int main()
{
string e="Yes",n="No";
int x,y;
cin>>x>>y;
int a,b;
a=(4*x-y)/2;
b=(y-2*x)/2;
if(a+b==x)
cout<<e;
else
cout<<n;
nl;
return 0;
}
