#include <bits/stdc++.h>
using namespace std;
#define int long long
#define REP(i,n) FOR(i, 0, n)
#define REPR(i,n) for (int i = n - 1; i >= 0; i--)
#define FOR(i,s,n) for (int i = (s), i ##_len = (n); i < i ##_len; ++i)
#define ALL(obj) (obj).begin(), (obj).end()
#define ALLR(obj) (obj).rbegin(), (obj).rend()
#define DIV(a,b) ((a - 1) / b + 1)
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
int X, Y;
cin >> X >> Y;
bool flag = false;
FOR(i, 1, X + 1) {
int t = 2 * i + 4 * (X - i);
if (t == Y) {
flag = true;
}
}
if (flag) {
cout << "Yes\n";
} else {
cout << "No\n";
}
return 0;
}
