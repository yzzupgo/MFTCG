#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;
#define l long long
#define pb push_back
#define mem(a,n) memset(a,n,sizeof(a))
#define find(v,n) find(v.begin(),v.end(),n)
#define sort1(v) sort(v.begin(),v.end())
#define lb(v,i,n) lower_bound(v.begin()+i,v.end(),n)
#define ub(v,n) upper_bound(v.begin(),v.end(),n)
#define mod 998244353
#define reverse(s) reverse(s.begin(),s.end())
const double pi=3.141592653589793;
bool isprime(l n)
{
for(l i=2;i*i<=n;i++)
{
if(n%i==0)
return false;
}
return true;
}
vector<l> fact(l n)
{
vector<l> v;
for(l i=1;i*i<=n;i++)
{
if(n%i==0)
{
v.pb(i);
}
}
return v;
}
l power(l a,l b)
{
l ans=1;
while(b>0)
{
if(b&1)
{
ans=(ans*a)%mod;
}
b>>=1;
a=(a%mod*a%mod)%mod;
}
return ans;
}
void frooty()
{
l a,b;
cin>>a>>b;
if(b>=(2*a)&&b<=(4*a))
cout<<"Yes"<<"\n";
else
cout<<"No"<<"\n";
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int q=1;
while(q--)
{
frooty();
}
}
