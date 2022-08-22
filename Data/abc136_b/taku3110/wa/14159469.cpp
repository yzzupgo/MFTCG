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
string s = to_string(i);
if(s.length()%2==0) ans++;
}
cout << ans << endl;
}
