#include<bits/stdc++.h>
using namespace std;
#define nl cout<<'\n';
int main()
{
string e="Yes",n="No";
int x,y;
cin>>x>>y;
for(int i=0; i<=x+1; i++)
{
int j=x-i;
if(j*4+i*2==y)
{
cout<<e;
nl;
return 0;
}
}
cout<<n;
nl;
return 0;
}
