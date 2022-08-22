#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define REP(i,n) for (int i = (0); i < (n); ++i)
#define ALL(obj) (obj).begin(), (obj).end()
#define DEBUG(val) cout << #val << " : " << val << endl
#define MOD 1000000007
int main() {
int x, y;
cin >> x >> y;
string ans = "No";
FOR(i, 1, x + 1) {
if (((2 * i) + 4 * (x - i)) == y) ans = "Yes";
}
cout << ans << endl;
}
