#define ll long long
#define lld long double
#define cn(n) ll n;cin >> n;
#define tes(t) ll t;cin>>t;while(t--)
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define rep(i,a,b) for (int i = a; i <= b; i++)
#define repd(i,a,b) for (int i = a; i >= b; i--)
#define pii pair<int, int>
#define pll pair<ll, ll>
#define al(v) v.begin(), v.end()
#define oset(X) tree<X, null_type, less<X>, rb_tree_tag, tree_order_statistics_node_update>
#define roset(X) tree<X, null_type, greater<X>, rb_tree_tag, tree_order_statistics_node_update>
const ll MOD = 1000 * 1000 * 1000 + 7;
const ll INF = 1ll * 1000 * 1000 * 1000 * 1000 * 1000 * 1000 + 7;
const ll MOD2 = 998244353;
const long double PI = 3.141592653589793;
#include <bits/stdc++.h>
using namespace std;
ll power(ll x, ll y, ll p){ll res = 1;x %= p;while (y > 0){if (y & 1)res = (res * x) % p;y = y >> 1;x = (x * x) % p;}return res;}
ll po(ll base, ll powerRaised){if (powerRaised != 0)return (base * po(base, powerRaised - 1));else return 1;}
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a * b) / gcd(a, b);}
int main()
{
ll x,y;
cin>>x>>y;
ll a=(4*x-y)/2;
ll b=x-a;
if(a+b==x && 2*a+4*b==y)
cout<<"Yes";
else cout<<"No";
}
