#include <bits/stdc++.h>
#include <math.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define ld long double
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define boost ios_base::sync_with_stdio(false),cin.tie(NULL);
#define fi0n for(ll i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define set(arr,x) memset(arr,x,sizeof(arr));
#define pb push_back
#define eb emplace_back
#define pll pair<ll,ll>
#define mp make_pair
#define ft first
#define sd second
#define vll vector<ll>
#define vii vector<int>
#define prec(x) fixed << setprecision(10)<<x
#define countbit(x) __builtin_popcountll(x)
template<typename T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const ll inf = 100000000000000001;
const ll mod = 1e9 + 7 ;
ll pow(ll x, unsigned ll y, ll p) {
ll res = 1;
x = x % p;
if(x == 0) {
return 0;
}
while(y > 0) {
if(y & 1) {
res = (res * x) % p;
}
y = y >> 1;
x = (x * x) % p;
}
return res;
}
ll _pow(ll a, ll b) {
if(!b) {
return 1;
}
ll temp = _pow(a, b / 2);
temp = (temp * temp);
if(b % 2) {
return (a * temp);
}
return temp;
}
ll invmod(ll a, ll m) {
return pow(a, m - 2, m);
}
void sub(ll &a, ll b) {
b %= mod;
a = (a + mod - b);
a %= mod;
}
vll fact;
void factorial() {
fact.resize(1e5 + 1);
fact[0] = 1;
for(ll i = 1; i <= 1e5; i++) {
fact[i] = (fact[i - 1] * i) % mod;
}
}
ll ncrmod(ll n, ll r, ll p) {
if(n < r) {
return 0;
}
if(r == 0) {
return 1;
}
return (fact[n] * invmod(fact[r], p) % p * invmod(fact[n - r], p) % p) % p;
}
int gcd(int a, int b) {
if(a > b) {
swap(a, b);
}
if(a == 0) {
return b;
}
if(a == 1) {
return 1;
}
return gcd(b - a, a);
}
vll se;
void call() {
se.resize((ll)1e7 + 1, 1);
se[1] = 0;
for(ll i = 2; i <= 1e7; i++) {
if(se[i] == 1) {
se[i] = i;
for(ll j = i * 2; j <= 1e7; j += i) {
se[j] = 0;
}
}
}
}
void solve() {
int n;
cin >> n;
n *= 1.08;
if(n < 206) {
cout << "Yay!";
} else {
cout << "so-so";
}
}
signed main() {
boost
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
ll t = 1;
while(t--) {
solve();
cout << "\n";
}
return 0;
}
