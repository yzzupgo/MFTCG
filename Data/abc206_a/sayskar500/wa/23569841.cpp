#include "bits/stdc++.h"
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define mod 1000000007
const int nax = 300 * 1000 + 10;
long long int fac[nax];
long long int mod_inv[nax];
inline int add(int a, int b) {
int c = (a % mod) + (b % mod);
if(c >= mod) {
c -= mod;
}
return c;
}
inline int mul(int a, int b) {
return ((a % mod) * 1ll * (b % mod)) % mod;
}
inline int sub(int a, int b) {
int c = (a % mod) - (b % mod);
if(c < 0) {
c += mod;
}
return c;
}
inline ll gcd(ll a, ll b) {
return __gcd(a, b);
}
inline ll lcm(ll a, ll b) {
return (a * b) / gcd(a, b);
}
long long int poww(long long int a, long long int p) {
long long int ans = 1;
while(p) {
if(p & 1) {
ans *= a;
}
a *= a;
ans %= mod;
a %= mod;
p >>= 1;
}
return ans;
}
ll power(ll x, ll y) {
ll p = mod;
ll res = 1;
x = x % p;
while(y > 0) {
if(y & 1) {
res = (res * x) % p;
}
y = y >> 1;
x = (x * x) % p;
}
return res;
}
vector<ll> make_fact_vi(ll n) {
vector<ll> fact;
fact.push_back(1);
for(ll i = 1; i <= n; i++) {
fact.push_back((i * fact[i - 1]) % mod);
}
return fact;
}
vector<ll> prm;
void Sieve(ll n) {
bool prime[n + 1];
memset(prime, true, sizeof(prime));
prime[0] = false;
prime[1] = false;
for(ll p = 2; p * p <= n; p++) {
if(prime[p] == true) {
for(ll i = p * p; i <= n; i += p) {
prime[i] = false;
}
}
}
if(!prm.empty()) {
prm.clear();
}
for(ll p = 2; p <= n; p++) {
if(prime[p]) {
prm.push_back(p);
}
}
}
void factorize(ll n) {
ll i, count = 0;
while(!(n % 2)) {
n >>= 1;
count++;
}
if(count) {
cout << "2 : " << count << "\n";
}
for(i = 3; i <= sqrt(n); i += 2) {
count = 0;
while(n % i == 0) {
count++;
n = n / i;
}
if(count) {
cout << i << " : " << count << "\n";
}
}
if(n > 2) {
cout << n << " : 1" << "\n";
}
}
map<ll, ll> count_freq_vi(vector<ll> &A) {
map<ll, ll>result;
ll i, n = A.size();
for(i = 0; i < n; i++) {
result[A[i]]++;
}
return result;
}
void pre() {
fac[0] = fac[1] = 1;
for(int i = 2; i < nax; ++i) {
fac[i] = mul(i, fac[i - 1]);
}
mod_inv[0] = mod_inv[1] = 1;
for(int i = 2; i < nax; ++i) {
mod_inv[i] = power(fac[i], mod - 2);
}
}
ll ncr(ll n, ll r) {
if(r > n) {
return 0LL;
}
int ans = mul(fac[n], mod_inv[r]);
ans = mul(ans, mod_inv[n - r]);
return ans;
}
ll str_to_int(string s) {
stringstream geek(s);
ll x = 0;
geek >> x;
return x;
}
string int_to_str(ll n) {
return to_string(n);
}
ll HCF_of_vi(vector<ll> &A) {
ll i, a, n = A.size();
a = A[0];
for(i = 0; i < n; i++) {
a = __gcd(a, A[i]);
}
return a;
}
ll LCM_of_vi(vector<ll> &A) {
ll i, a, b, n = A.size();
a = A[0];
b = A[0];
for(i = 0; i < n; i++) {
b = __gcd(a, A[i]);
a = (a * A[i]) / b;
}
return a;
}
ll mod_inverse(ll n) {
return power(n, mod - 2);
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
ll n;
cin >> n;
float h = n * 1.08;
if(h < 206) {
cout << "Yay!" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
