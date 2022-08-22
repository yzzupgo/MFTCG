#include "bits/stdc++.h"
#define ll long long
#define chl_jldi ios_base::sync_with_stdio(false); cin.tie(0)
#define mnpqll priority_queue<long long, vector<long long>, greater<long long> >
#define mxpqll priority_queue<long long>
#define pb push_back
#define mp make_pair
#define pll pair<ll,ll>
#define ff first
#define ss second
#define uset unordered_set
#define pnl cout<<"\n"
#define isodd(xz2) (xz2&1)
#define umap unordered_map
using namespace std;
ll add_mod(ll a, ll b, ll m) {
return ((((a % m) + (b % m)) % m + m) % m);
}
ll subs_mod(ll a, ll b, ll m) {
return ((((a % m) - (b % m)) % m + m) % m);
}
ll mult_mod(ll a, ll b, ll m) {
return ((((a % m) * (b % m)) % m + m) % m);
}
ll power(ll x, ll y) {
ll res = 1;
while(y > 0) {
if(y & 1) {
res = res * x;
}
y = y >> 1;
x = x * x;
}
return res;
}
ll power_mod(ll x, ll y, ll mod) {
ll res = 1;
while(y > 0) {
if(y & 1) {
res = mult_mod(res, x, mod);
}
y = y >> 1;
x = mult_mod(x, x, mod);
}
return res;
}
ll test = 1;
void test_case() {
cin >> test;
}
void solve() {
int n;
cin >> n;
int ans = 1.08 * (float)(n);
if(ans < 205) {
cout << "Yay!";
} else if(ans == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return;
}
int main() {
chl_jldi;
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
freopen("error.txt", "w", stderr);
#endif
test_case();
ll koko = 1;
while(koko <= test) {
solve();
koko++;
}
return 0;
}
