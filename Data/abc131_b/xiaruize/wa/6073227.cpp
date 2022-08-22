#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int l;
cin>>l;
int a[n+1];
int mini=0;
int minn=10000;
for(int i=1;i<=n;i++)
{
a[i]=l+i-1;
if(abs(a[i])<minn)
{
minn=a[i];
mini=i;
}
}
a[mini]=0;
int ans=0;
for(int i=1;i<=n;i++)
{
ans+=a[i];
}
cout<<ans<<endl;
return 0;
}
