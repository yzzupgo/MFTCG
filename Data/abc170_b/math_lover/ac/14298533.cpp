#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define rep(i,a,b) for(i=a;i<b;i++)
ll int large=(ll int)1e18;
ll int mod=(ll int)1e9+7;
ll int mod_exp(ll int x,ll int n)
{
ll int result=1;
while(n>0)
{
if(n%2==1)
result=(result*x)%mod;
x=(x*x)%mod;
n=n/2;
}
return result;
}
ll int mod_inverse(ll int a)
{
return mod_exp(a,mod-2);
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll int T,i,j,ij;
T=1;
while(T--)
{
ll int n,val;
cin>>n>>val;
rep(i,0,n+1)
if(2*i+(4*(n-i))==val)
{
cout<<"Yes"<<endl;
return 0;
}
cout<<"No"<<endl;
}
return 0;
}
