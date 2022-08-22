#include "bits/stdc++.h"
using namespace std;
#define sw(x) cerr << #x << " : " << x << '\n'
#define pb push_back
typedef long long ll;
typedef pair<ll, ll> pll;
ll const N = 1e6 + 5, mod = 1e9 + 7, inf = 1e17, sq = 500;
ll a[N], b[N], c[N], dp[N], ps[N];
pll p[N];
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
ll n;
cin >> n;
ll f = floor(1.08 * n);
if(f < 206) {
cout << "Yay!";
} else if(f == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
