#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
int n,l;
cin>>n>>l;
int ar[n+1],pp[n];
ar[0]=l;
pp[0]=abs(ar[0]);
for(int i=1;i<n;i++)
{
ar[i]=ar[i-1]+1;
pp[i]=abs(ar[i]);
}
int minx=1000000009,mini=0,sum=0;
for(int i=0;i<=n;i++)
{
if(minx>pp[i])
{
minx=pp[i];
mini=i;
}
}
for(int i=0;i<n;i++)
{
if(i==mini)
continue;
else
sum+=ar[i];
}
cout<<sum<<endl;
return 0;
}
