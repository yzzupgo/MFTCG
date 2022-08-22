#include<bits/stdc++.h>
using namespace std;
int main ()
{
int x,n;
cin>>x>>n;
int a[n];
unordered_map<int,int> m;
for(int i=0;i<n;i++)
{
cin>>a[i];
m[a[i]]=1;
}
int res=INT_MAX,ans;
for(int i=-101;i<=101;i++)
{
if(!m[i])
{
if(res>abs(x-i))
{
ans=i;
res=abs(x-i);
}
}
}
cout<<ans<<endl;
}
