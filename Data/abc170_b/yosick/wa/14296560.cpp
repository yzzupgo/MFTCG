#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
#include <map>
#include <queue>
#include <cmath>
#include <iomanip>
#include <functional>
#define MOD (1000000007)
using namespace std;
typedef long long ll;
typedef pair<ll, ll> tup;
const int MAX = 510000;
long long fac[MAX], finv[MAX], inv[MAX];
ll modpow(ll a, ll n, ll mod) {
ll res = 1;
while (n > 0) {
if (n & 1) res = res * a % mod;
a = a * a % mod;
n >>= 1;
}
return res;
}
void COMinit() {
fac[0] = fac[1] = 1;
finv[0] = finv[1] = 1;
inv[1] = 1;
for (int i = 2; i < MAX; i++){
fac[i] = fac[i - 1] * i % MOD;
inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
finv[i] = finv[i - 1] * inv[i] % MOD;
}
}
long long COM(int n, int k){
if (n < k) return 0;
if (n < 0 || k < 0) return 0;
return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}
map<ll,ll> prime;
void prime_factorize(ll n){
if(n<=1) return;
ll l=sqrt(n);
for(ll i=2;i<=(ll)(l);i++) {
if(n%i==0){
prime_factorize(i);prime_factorize(ll(n/i));return;
}
}
prime[n]++;return;
}
int main() {
ll X, Y;
cin >> X >> Y;
ll diff = 4 * X - Y;
if(diff % 2 == 0 && diff >= 0) {
cout << "Yes" << endl;
return 0;
}
cout << "No" << endl;
return 0;
}
