#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define f first
#define s second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define forn(i,n) for(int i=0;i<n;++i)
#define show(b) for(auto const&x: b) cout<<x<<" "
#define sshow(b) for(auto x:b) cout<<x<<" "
#define fix(b,val) memset(b,val,sizeof(b))
#define pill(b,n,v) fill(b,b+n,v)
#define itn int
#define w(t) int t;cin>>t;while(t--)
#define mx(a,b,c) max(a,max(b,c))
#define mn(a,b,c) min(a,min(b,c))
#define intmax INT_MAX
#define intmin INT_MIN
#define nl "\n"
#define prt(val) cout<<val<<"\n"
#define all(v) v.begin(),v.end()
#define trace1(x) cerr<<#x<<": "<<x<<endl
#define trace2(x,y) cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x,y,z) cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a,b,c,d) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a,b,c,d,e) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a,b,c,d,e,f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
typedef long long int ll;
typedef long double LD;
typedef unsigned long long int LL;
typedef pair<int,int> pii;
typedef pair<long long int,int> pli;
typedef pair<int,long long int> pil;
typedef pair<long long int,long long int> pll;
const int N=1e5+5;
const int mod=1e9+7;
template<typename T>
void show2d(const vector<vector<T>>& adj)
{
for(auto x:adj)
{
for(auto y:x)
{
cout<<y<<" ";
}
cout<<"\n";
}
}
ll modexp(ll a,ll b,ll mod)
{
ll x=1;
while(b)
{
if(b&1)
x = ((x%mod) * (a%mod))%mod;
a = ((a%mod) * (a%mod))%mod;
b = b / 2;
}
return x;
}
void rf()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
int32_t main()
{
fast;
int a,b;
cin>>a>>b;
if((a*2 == b) || (a*4 == b)){
cout<<"YES\n";
}
else{
cout<<"NO\n";
}
}
