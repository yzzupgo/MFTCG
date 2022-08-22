#include<bits/stdc++.h>
using namespace std;
#define int long long
#define sz(x) (int)((x).size())
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
void setIO(string s = "") {
ios_base::sync_with_stdio(0);
cin.tie(0);
if(sz(s)) {
freopen((s + ".in").c_str(), "r", stdin);
freopen((s + ".out").c_str(), "w", stdout);
}
}
const int MOD = 1e9 + 7;
const int MAXN = 2e5 + 1;
const int INF = 1e18 + 5;
signed main() {
setIO();
int t = 1;
while(t--) {
int n;
cin >> n;
int x = floor(1.08 * (double)n);
if(x < 206) {
cout << "Yay!";
} else if(x == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
return 0;
}
