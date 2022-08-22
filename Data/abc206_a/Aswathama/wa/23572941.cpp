#include<bits/stdc++.h>
void intl() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007
#define INF 10000000000000001
#define F first
#define S second
#define LB lower_bound
#define UB upper_bound
#define vc vector
#define vll vector<long long>
#define pll pair<long long,long long>
#define pb push_back
#define all(v) v.begin(),v.end()
#define forn(i,a,n) for(ll i=a;i<(long long)n;++i)
#define backn(i,n,a) for(ll i=n;i>(long long)a;--i)
#define sz(x) (ll)x.size()
#define ins insert
#define mp make_pair
#define int long long int
#define cy cout<<"Yes\n";
#define cno cout<<"No\n";
typedef long long ll;
typedef long double ld;
using namespace std;
ll round_up(ll a, ll b) {
return (a + b - 1) / b;
}
ll gcd(ll a, ll b) {
if(b > a) {
return gcd(b, a);
}
if(b == 0) {
return a;
}
return gcd(b, a % b);
}
ll nCr(ll n, ll r, ll m, ll *fact, ll *ifact) {
ll val1 = fact[n];
ll val2 = ifact[n - r];
ll val3 = ifact[r];
return (((val1 * val2) % m) * val3) % m;
}
ll mod_add(ll a, ll b, ll m) {
a = a % m;
b = b % m;
return (((a + b) % m) + m) % m;
}
ll mod_mul(ll a, ll b, ll m) {
a = a % m;
b = b % m;
return (((a * b) % m) + m) % m;
}
ll mod_sub(ll a, ll b, ll m) {
a = a % m;
b = b % m;
return (((a - b) % m) + m) % m;
}
void solve() {
int n;
cin >> n;
if(n > 191) {
cout << "Yay!";
} else if(n == 191) {
cout << "so-so";
} else {
cout << ":(";
}
}
signed main() {
intl();
FASTIO;
int t = 1;
while(t-- > 0) {
solve();
}
return 0;
}
