#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll n,k,x,sum=0,m=1e18;
cin>>n>>k;
ll a[n];
for(int i=1;i<=n;i++)
{
a[i-1]=k+i-1;
sum+=a[i-1];
}
for(int i=0;i<n;i++)
{
m=min(m,sum-a[i]);
}
cout<<m;
return 0;
}
