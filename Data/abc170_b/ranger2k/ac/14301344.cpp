#include <bits/stdc++.h>
#define F first
#define S second
#define MAX 10000003
using namespace std;
typedef long long int ll;
const ll mod = 1e9+7;
const ll INF= 1e18;
long double PI=3.1415926;
ll power(ll a,ll b){
if(b==0){
return 1;
}
ll temp=power(a,b/2)%mod;
if(b%2==0){
return (temp*temp)%mod;
}
else{
return ((a*temp)%mod*temp)%mod;
}
}
ll gcd(ll a, ll b)
{
if (b == 0)
return a;
return gcd(b, a % b);
}
vector<ll>v;
vector<ll>::iterator it;
map<ll,ll>mp;
void primeFactors(ll n)
{
while (n % 2 == 0)
{
mp[2]++;
n = n/2;
}
for (ll i = 3; i <= sqrt(n); i = i + 2)
{
while (n % i == 0)
{
mp[i]++;
n = n/i;
}
}
if (n > 2){
mp[n]++;
}
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("inp.txt", "r", stdin);
freopen("out.tex", "w", stdout);
#endif
ll t;
t=1;
while(t--){
ll a,b;
cin>>a>>b;
for(ll x=0; x<=a; x++){
if(b==4*x+2*(a-x)){
cout<<"Yes\n";
return 0;
}
}
cout<<"No\n";
mp.clear();
v.clear();
}
return 0;
}
