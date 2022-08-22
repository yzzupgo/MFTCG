#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
#define mod 1000000007
ll pw(ll a, ll b) {
ll ans = 1;
while(b) {
if(b & 1) {
ans = (ans * a) % mod;
}
a = (a * a) % mod;
b /= 2;
}
return ans;
}
vector<vector<ll>>dp(1001, vector<ll>(1001, -1));
ll solve(ll a, ll b) {
if(a == 0 || b == 0) {
return 1e9;
}
if(a == b) {
return 0;
}
if(dp[a][b] != -1) {
return dp[a][b];
}
ll ans = 1e9;
for(ll i = 1; i < a; i++) {
ans = min(ans, solve(i, b) + solve(a - i, b) + 1);
}
for(ll i = 1; i < b; i++) {
ans = min(ans, solve(a, b - i) + 1 + solve(a, i));
}
return dp[a][b] = ans;
}
ll inverse_mod(ll a, ll b) {
return((a % mod) * (pw(b, mod - 2))) % mod;
}
int main() {
ios::sync_with_stdio(false);
cin.tie(0);
ll n;
cin >> n;
n = n * 1.08;
if(n < 206) {
cout << " Yay!\n";
} else if(n == 206) {
cout << "so-so";
} else {
cout << " :(\n";
}
}
