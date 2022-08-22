#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++)
#define rrep(i,n) for (int i = (n) - 1; i >= 0; i--)
#define loop(i,r,n) for (int i = (r); i < (n); i++)
#define lloop(i,r,n) for (int i = (r) - 1; i >= 0; i--)
#define all(in) in.begin(),in.end()
#define pb push_back
#define fi first
#define se second
#define re resize
#define as assign
#define cl clear
template<class T> bool chmax(T &a, const T &b) {
if(a < b) {
a = b;
return 1;
}
return 0;
}
template<class T> bool chmin(T &a, const T &b) {
if(b < a) {
a = b;
return 1;
}
return 0;
}
using ui = unsigned int;
using ll = long long;
using ull = unsigned long long;
using dd = double;
using ldd = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using pdd = pair<dd, dd>;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vll = vector<ll>;
using vvll = vector<vll>;
using vvvll = vector<vvll>;
using vb = vector<bool>;
using vs = vector<string>;
using vdd = vector<dd>;
using vldd = vector<ldd>;
using pq = priority_queue<int, vector<int>, less<int>>;
using pqq = priority_queue<int, vector<int>, greater<int>>;
int dx[8] = { 1, 0, -1, 0, 1, 1, -1, -1 };
int dy[8] = { 0, 1, 0, -1, 1, -1, 1, -1 };
const ll MOD = 998244353;
const int INF = 1e9;
const ll inf = 4e18;
const int MAX = 300300;
long long fac[MAX], finv[MAX], inv[MAX];
void COMinit() {
fac[0] = fac[1] = 1;
finv[0] = finv[1] = 1;
inv[1] = 1;
for(int i = 2; i < MAX; i++) {
fac[i] = fac[i - 1] * i % MOD;
inv[i] = (MOD - inv[MOD % i] * (MOD / i) % MOD) % MOD;
finv[i] = finv[i - 1] * inv[i] % MOD;
}
}
long long COM(int n, int k) {
if(n < 0 || k < 0 || n < k) {
return 0;
}
return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}
long long PER(int n, int k) {
if(n < 0 || k < 0 || n < k) {
return 0;
}
return fac[n] * finv[n - k] % MOD;
}
ll modpow(ll a, ll n, ll p) {
ll res = 1;
while(n) {
if(n & 1) {
res = res * a % p;
}
a = a * a % p;
n >>= 1;
}
return res;
}
ll modinv(ll a, ll p) {
return modpow(a, p - 2, p);
}
vector<pair<ll, ll>> prime(ll n) {
vector<pair<ll, ll>> res;
for(ll i = 2; i * i <= n; i++) {
if(n % i != 0) {
continue;
}
ll count = 0;
while(n % i == 0) {
count++;
n /= i;
}
res.push_back(make_pair(i, count));
}
if(n != 1) {
res.push_back(make_pair(n, 1));
}
return res;
}
vector<int> Zalgo(const string &S) {
int N = (int)S.size();
vector<int> Z(N);
Z[0] = N;
int i = 1, j = 0;
while(i < N) {
while(i + j < N && S[j] == S[i + j]) {
j++;
}
Z[i] = j;
if(j == 0) {
i++;
continue;
}
int k = 1;
while(i + k < N && k + Z[k] < j) {
Z[i + k] = Z[k];
k++;
}
i += k;
j -= k;
}
return Z;
}
int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n;
cin >> n;
n *= 108;
if(n < 20600) {
cout << "Yay!" << endl;
} else if(n == 26000) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
