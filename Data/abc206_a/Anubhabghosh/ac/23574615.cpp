#pragma GCC optimize(2)
#pragma GCC optimize(3)
#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,O3")
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define bg begin()
#define en end()
#define endl "\n"
#define vvl(n,m) vector<vector<ll> > a( n , vector<ll> (m))
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
using namespace std;
#define MAXN 100001
int spf[MAXN];
ll gcd(ll a, ll b) {
if(a == 0) {
return b;
} else {
return gcd(b % a, a);
}
}
ll power(ll x, ll y, ll m) {
if(y == 0) {
return 1;
}
ll p = power(x, y / 2, m) % m;
p = (p * p) % m;
return (y % 2 == 0) ? p : (x * p) % m;
}
ll modInverse(ll a, ll m) {
return power(a, m - 2, m);
}
ll ncr(ll n, ll k) {
ll res = 1;
if(k > n - k) {
k = n - k;
}
for(ll i = 0; i < k; ++i) {
res *= (n - i);
res /= (i + 1);
}
return res;
}
ll sod(ll n) {
ll sum = 0;
while(n > 0) {
sum += (n % 10);
n /= 10;
}
return sum;
}
void permute(string str) {
set<string> s;
sort(str.begin(), str.end());
do {
if(s.count(str) == 0) {
cout << str << endl;
}
s.insert(str);
} while(next_permutation(str.begin(), str.end()));
}
bool isPrime(int n) {
if(n <= 1) {
return false;
}
if(n <= 3) {
return true;
}
if(n % 2 == 0 || n % 3 == 0) {
return false;
}
for(int i = 5; i * i <= n; i = i + 6)
if(n % i == 0 || n % (i + 2) == 0) {
return false;
}
return true;
}
int nextPrime(int N) {
if(N <= 1) {
return 2;
}
int prime = N;
bool found = false;
while(!found) {
prime++;
if(isPrime(prime)) {
found = true;
}
}
return prime;
}
void sieve() {
spf[1] = 1;
for(int i = 2; i < MAXN; i++) {
spf[i] = i;
}
for(int i = 4; i < MAXN; i += 2) {
spf[i] = 2;
}
for(int i = 3; i * i < MAXN; i++) {
if(spf[i] == i) {
for(int j = i * i; j < MAXN; j += i)
if(spf[j] == j) {
spf[j] = i;
}
}
}
}
vector<int> getFactorization(int x) {
vector<int> ret;
while(x != 1) {
ret.push_back(spf[x]);
x = x / spf[x];
}
return ret;
}
void solve() {
ll n;
cin >> n;
ll r = n * 1.08;
if(r < 206) {
cout << "Yay!";
} else if(r == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
int main() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
fast
solve();
#ifndef ONLINE_JUDGE
cout << "\nTime Elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " sec\n";
#endif
return 0;
}
