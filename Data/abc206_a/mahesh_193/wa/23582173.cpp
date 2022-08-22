#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define inf 10000000000000000
typedef long long ll;
#define mp make_pair
#define f first
#define s second
ll GCD(ll a, ll b) {
ll maxi = max(a, b);
ll mini = min(a, b);
while(maxi && mini) {
ll t = mini;
mini = maxi % mini;
maxi = t;
}
return max(maxi, mini);
}
ll power(ll x, ll y) {
ll res = 1;
while(y) {
if(y & 1) {
res = (res * x) % mod;
}
x = (x * x) % mod;
y = y >> 1;
}
return res % mod;
}
ll ncr(ll x, ll y) {
ll ans = 1;
y = (y > x - y ? x - y : y);
for(ll i = 0; i < y; i++) {
ans = (ans * (x - i)) % mod;
ans = (ans * power(i + 1, mod - 2)) % mod;
ans = ans % mod;
}
return ans;
}
vector<vector<ll>> fib = {{1, 1}, {1, 0}};
vector<vector<ll>> matrixMultiplication(vector<vector<ll>> &a, vector<vector<ll>> &b) {
int n = a.size(), m = a[0].size(), l = b[0].size();
vector<vector<ll>> ans(n, vector<ll>(l, 0));
for(int i = 0; i < n; i++) {
for(int k = 0; k < l; k++) {
for(int j = 0; j < m; j++) {
ans[i][k] = (ans[i][k] + (a[i][j] * b[j][k]) % mod) % mod;
}
}
}
return ans;
}
vector<vector<ll>> matrixExponentiation(ll n) {
if(n == 1) {
return fib;
}
vector<vector<ll>> ans = matrixExponentiation(n / 2);
ans = matrixMultiplication(ans, ans);
if(n % 2 == 1) {
ans = matrixMultiplication(ans, fib);
}
return ans;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int n;
cin >> n;
n = floor(1.08 * n);
if(n == 206) {
cout << "so-so\n";
} else if(n < 206) {
cout << "Yay\n";
} else {
cout << ":(\n";
}
return 0;
}
