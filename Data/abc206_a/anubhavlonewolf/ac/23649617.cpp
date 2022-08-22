#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#include<vector>
#include<map>
#include<queue>
#define pb push_back
#define ff first
#define se second
#define pll pair<ll, ll>
#define vi vector<ll>
#define vpl vector<pll>
#include<stack>
#include<set>
#define pt(x,y) cout<<"Case #"<<x<<": "<<y<<endl;
#define mod 1000000007
#define inf INT_MAX
#define mem(a,val) memset(a,val,sizeof(a))
#define prec(n) fixed<<setprecision(n)
#define bitcount(n) __builtin_popcountll(n)
#define sz 1e5+5
ll power(ll n, ll ind) {
if(ind == 0) {
return 1LL;
}
ll x = power(n, ind / 2) % mod;
if(ind % 2 == 0) {
return (x * x) % mod;
} else {
return (x * x * n) % mod;
}
}
typedef pair<ll, ll> pl;
void solve() {
ll i, j, k, l, n, m, a, b, u;
cin >> n;
ll x = (108 * n);
x /= 100;
if(x < 206) {
cout << "Yay!";
} else if(x == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
int main() {
fastIO
ll t;
t = 1;
ll z = 1;
while(t--) {
solve();
}
return 0;
}
