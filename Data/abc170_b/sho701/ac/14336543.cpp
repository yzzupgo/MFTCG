#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007;
const long long INF = 1LL << 60;
long power(long a, long b) {
return b ? power(a*a%MOD, b/2) * (b%2?a:1)%MOD:1;
}
long perm(int N, int K) {
long x = 1;
for(int i = 1; i <= K; i++) x = x * (N-i+1) % MOD;
return x % MOD;
}
long comb(int N,int K) {
long x = 1, y = 1;
for(int i = 1; i <= K; i++) {
x = x * (N-i+1) % MOD;
y = y * i % MOD;
}
return x * power(y, MOD-2) % MOD;
}
bool isprime(int n) {
if(n < 2) return false;
for(int i = 2; i*i <= n; ++i) {
if (n % i == 0) return false;
}
return true;
}
void dfs(const vector<vector<int> > &G, int v, vector<int> &seen) {
seen[v] = true;
for(int next_v : G[v]) {
if(seen[next_v]) continue;
dfs(G, next_v, seen);
}
}
void yes() { cout << "Yes" << endl;}
void no() { cout << "No" << endl;}
int main() {
int x, y;
bool flag = false;
cin >> x >> y;
for (int i = 0; i <= x; i++) {
for (int j = 0; j <= x; j++) {
if (i+j==x && 2*i+4*j==y) flag = true;
}
}
if (flag) yes();
else no();
}
