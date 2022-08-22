#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define watch(x) cout << (#x) << " is " << (x) << endl
#define all(x) x.begin(), x.end()
#define printVec(vec) {for(auto &x : vec) cout << x <<" "; cout << endl; }
#define printMap(mp) {for(auto &p : mp) cout << p.first <<" " <<p.second <<endl;}
#define MOD 1000000007
#define hM 9999999900000001
#define inf 1e17
void solve(int T) {
double x;
cin >> x;
double v = 1.08 * x;
int aa = (v);
if(aa < 206) {
cout << "Yay!";
} else {
cout << ":(";
}
}
int32_t main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("inputf.txt", "r", stdin);
freopen("outputf.txt", "w", stdout);
#endif
int T = 1;
for(int t = 1; t <= T; t++) {
solve(t);
}
cerr << "time taken : " << (float) clock() / CLOCKS_PER_SEC << " secs" << endl;
return 0;
}
