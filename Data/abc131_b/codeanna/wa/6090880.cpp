#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll n,k,x,sum=0;
cin>>n>>k;
ll a[n];
for(int i=1;i<=n;i++)
{
a[i-1]=k+i-1;
sum+=a[i-1];
}
if(k>0)
cout<<sum-a[0];
else
{
cout<<sum-a[n-1];
}
return 0;
}
