#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
typedef long long ll;
const int N = 1e6;
int cnt[N + 1];
void solve() {
int a, b; cin >> a >> b;
if (a < 2 * b || (a - 2 * b) & 1) {
cout << "No"; return;
}
cout << "Yes";
}
int main() {
ios::sync_with_stdio(NULL), cin.tie(0), cout.tie(0);
cout.setf(ios::fixed), cout.precision(2);
solve();
}
