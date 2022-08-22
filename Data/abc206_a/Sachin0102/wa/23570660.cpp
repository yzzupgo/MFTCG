#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define fi first
#define se second
#define int long long int
#define pii pair<int,int>
const int INF = 1e12;
const int MAX = 5e6 + 5;
const int MAXK = 105;
const int mod = 1e9 + 7;
int gcd(int a, int b) {
while(b != 0) {
a = a % b;
swap(a, b);
}
return a;
}
int binpow(int a, int b) {
int res = 1;
while(b > 0) {
if(b % 2 == 1) {
res = res * a % mod;
}
a = a * a % mod;
b /= 2;
}
return res;
}
void solve() {
double val = 1.08;
int n;
cin >> n;
val = floor(val * n);
if(val < 260) {
cout << "Yay!";
} else if(val == 260) {
cout << "so-so";
} else {
cout << ":(";
}
}
int32_t main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int t = 1;
for(int i = 1; i <= t; i++) {
solve();
}
}
