#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#include <tuple>
#include <cassert>
#include <functional>
#include <set>
#include <deque>
#include <list>
using namespace std;
typedef long long ll;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
#define LNF __LONG_LONG_MAX__
const ll MOD = 1000000007;
const int MAX = 200000;
long long fac[MAX], finv[MAX], inv[MAX];
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
long long modinv(long long a, long long m) {
long long b = m, u = 1, v = 0;
while (b) {
long long t = a / b;
a -= t * b; swap(a, b);
u -= t * v; swap(u, v);
}
u %= m;
if (u < 0) u += m;
return u;
}
long long modpow(long long a, long long n, long long mod) {
long long res = 1;
while (n > 0) {
if (n & 1) res = res * a % mod;
a = a * a % mod;
n >>= 1;
}
return res;
}
long long gcd(long long x, long long y){
if(y==0) return x;
else return gcd(y,x%y);
}
long long lcm(long long x, long long y){
return x / gcd(x, y) * y;
}
long long com[200005];
void combination(long long n,long long k){
com[0] = 1;
for(int i=1;i<=k;i++){
com[i] = (com[i-1]*(n-i+1)%MOD)*modinv(i,MOD)%MOD;
}
}
int main(){
int N; cin >> N;
int L; cin >> L;
int l=L;
int r=L+N-1;
int out=0;
if(r<=0){
out = (r+l)*(r-l+1)/2 - r;
}else if(l<0){
out = (r+l)*(r-l+1/2);
}else{
out = (r+l)*(r-l+1)/2-l;
}
cout << out << endl;
return 0;
}
