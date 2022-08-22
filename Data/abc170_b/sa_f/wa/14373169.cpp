#include<bits/stdc++.h>
using namespace std;
#define nl cout<<'\n';
int main()
{
string e="Yes",n="No";
int x,y;
cin>>x>>y;
for(int i=0; i<=100; i++)
{
for(int j=0;j<=100;j++)
{
if(i*4+j*2==y)
{
cout<<e;
nl;
return 0;
}
}
}
cout<<n;
nl;
return 0;
}
