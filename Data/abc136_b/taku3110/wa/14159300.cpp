#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
#define be(v) v.begin(), v.end()
#define ll long long
ll INF = 1e9;
ll mod = 1e9+7;
ll dp[10001];
int main() {
int n; cin >> n;
int ans = 0;
rep(i,n) {
if(1<=i<=9) ans++;
else if(100<=i<=999) ans++;
else if(10000<=i<=99999) ans++;
}
cout << ans << endl;
}
