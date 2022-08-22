#include <bits/stdc++.h>
#include <unordered_map>
#define ll long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define rep(i,n) for(ll i=0;i<n;i++)
#define all(c) (c).begin(),(c).end()
#define max3(a,b,c) max(max(a,b),c)
#define min3(a,b,c) min(min(a,b),c)
#define vi vector <int>
#define vs vector <string>
#define vc vector <char>
#define vl vector <ll>
#define INF 0x3f3f3f3f
using namespace std;
ll power(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
ll modInverse(ll a){return power(a,mod-2);}
ll gcd(ll a , ll b){if(b==0) return a; a%=b; return gcd(b,a);}
const int N=500023;
bool vis[N];
vector <int> adj[N];
void solve()
{
int x, y;
cin>>x>>y;
if(y%2 != 0)
{
cout<<"No"<<endl;
return;
}
y = y/2;
if(y - x >= 0)
{
cout<<"Yes"<<endl;
}
else
{
cout<<"No"<<endl;
}
}
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int T=1;
int t=0;
while(t++<T)
{
solve();
}
cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
}
