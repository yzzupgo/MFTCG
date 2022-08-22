#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
int32_t main()
{
IOS;
ll n,l,i,sum=0;
cin>>n>>l;
ll a[n];
for(i=0;i<n;i++)
{
a[i]=l+(i+1)-1;
}
if(l>0)
{
for(i=1;i<n;i++)
{
sum+=a[i];
}
}
else if(l==0)
{
for(i=1;i<n;i++)
{
sum+=a[i];
}
}
else if(l<0&&n>-l)
{
for(i=0;i<n;i++)
{
sum+=a[i];
}
}
else if(l<0&&n<-l)
{
for(i=0;i<n-1;i++)
{
sum+=a[i];
}
}
else if(l<0&&n==-l)
{
for(i=0;i<n;i++)
{
sum+=a[i];
}
sum=sum+1;
}
cout<<sum;
return 0;
}
