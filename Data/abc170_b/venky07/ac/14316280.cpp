#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
t=1;
while(t--)
{
int i,j,k,n,a,b;
cin>>n>>a;
k=0;
i=0;
j=0;
b=0;
for(i=0;i<=n;i++)
{
if( 2*i+ 4*(n-i)==a)
k=-1;
}
if(k==-1)
cout<<"Yes\n";
else
cout<<"No\n";
}
}
