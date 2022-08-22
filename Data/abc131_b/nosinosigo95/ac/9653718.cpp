#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++)
#define rrep(i,n) for (int i = (n)-1; i >= 0; i--)
typedef long long llong;
const int inf = 1 << 20;
const int mod = 1e9 + 7;
int main() {
int n, l;
cin >> n >> l;
vector<int> taste;
rep(i, n) { taste.push_back(l + i); }
int m = inf;
int mi = -1;
rep(i, n) {
if (m > abs(taste[i])) {
m = abs(taste[i]);
mi = i;
}
}
int ans = 0;
rep(i, n) {
if (mi == i) continue;
ans += taste[i];
}
cout << ans << endl;
return 0;
}
