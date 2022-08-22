#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long
#define int long long
#define ld long double
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define MX LLONG_MAX
#define MN LLONG_MIN
const int N=1e5+5;
const ll mod=1e9+7;
ll powermodm(ll x,ll n,ll M){ll result=1;while(n>0){if(n % 2 ==1)result=(result * x)%M;x=(x*x)%M;n=n/2;}return result;}
ll power(ll _a,ll _b){ll _r=1;while(_b){if(_b%2==1)_r=(_r*_a);_b/=2;_a=(_a*_a);}return _r;}
ll gcd(ll a,ll b){if(a==0)return b;return gcd(b%a,a);}
ll lcm(ll a,ll b){return (max(a,b)/gcd(a,b))*min(a,b);}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll a,b;
cin>>a>>b;
if(a>=13)
cout<<b;
else if(a<=5)
cout<<0;
else
cout<<(b/2);
return 0;
}
