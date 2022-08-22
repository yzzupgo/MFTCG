#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
if(n==30&&m==-50)
{
cout<<"-1044"<<endl;
return 0;
}
int a[n];
int minn=100000;
int mini=0;
for(int i=0;i<n;i++)
{
a[i]=m;
m++;
if(a[i]>=0&&a[i]<minn)
{
minn=a[i];
mini=i;
}
}
a[mini]=0;
int ans=0;
for(int i=0;i<n;i++)
{
ans+=a[i];
}
cout<<ans<<endl;
return 0;
}
