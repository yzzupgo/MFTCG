#include<bits/stdc++.h>
#define ll long long int
#define s string
#define el '\n'
const ll N = 1e5;
const ll MOD = 1e9 + 7;
using namespace std;
vector<ll>G[N];
vector<ll>V;
vector<ll>m1;
vector<vector<ll> >m2;
vector<s> PS;
pair<ll, ll>P;
ll Fibonnaci_DP(ll k) {
vector<ll>b;
b[0] = 0;
b[1] = b[2] = 1;
for(ll i = 3; i <= k; i++) {
b[i] = b[i - 1] + b[i - 2];
}
return (b[k] % MOD);
}
ll Factorial_DP(ll n) {
vector<ll>a;
a[0] = a[1] = 1;
for(ll i = 2; i <= n; i++) {
a[i] = a[i - 1] * i;
}
return (a[n] % MOD);
}
ll gcd(ll a, ll b) {
if(b == 0) {
return a;
} else {
return gcd(b, a % b);
}
}
void permuatation(ll l, ll h, s &st) {
if(l == h) {
PS.push_back(st);
} else {
for(ll i = l; i <= h; i++) {
swap(st[i], st[l]);
permuatation(l + 1, h, st);
swap(st[i], st[l]);
}
}
}
void seive(ll n) {
vector<bool>a(n + 3, 1);
for(ll i = 2; i * i <= n; i++) {
if(a[i]) {
for(ll j = i * i; j <= n; j += i) {
a[j] = 0;
}
}
}
for(ll t = 2; t <= n; t++) {
if(a[t]) {
cout << t << ' ';
}
}
}
ll power(ll a, ll b) {
if(a < 0) {
a = a * (-1);
}
if(b < 0) {
b = b * (-1);
}
if(b == 0) {
return 1;
}
if(b == 1) {
return a;
}
ll t = power(a, b / 2);
if(a & 1) {
return a * t * t;
} else {
return t * t;
}
}
ll Kadane(vector<ll>a) {
ll sum = 0;
ll ans = INT_MIN;
for(ll i = 0; i < a.size(); i++) {
sum += a[i];
ans = max(sum, ans);
if(sum < 0) {
sum = 0;
}
}
return ans;
}
bool check(vector<ll>a) {
sort(a.begin(), a.end());
for(ll i = 0; i < a.size(); i++) {
if(a[i] != i + 1) {
return false;
}
}
return true;
}
void solve() {
ll n;
cin >> n;
ll result = floor(n * 1.08);
if(result == 206) {
cout << "so-so" << el;
} else if(result < 206) {
cout << "Yay!" << el;
} else {
cout << ":(" << el;
}
}
int main() {
solve();
}
