#include <bits/stdc++.h>
#define REP(i,n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long ll;
int main() {
int n, l;
cin >> n >> l;
int ans = 0;
int a = 0, b = 1000;
REP(i,n) {
a = l+i;
ans += a;
b = min(b, abs(a));
}
if (l+n <= 0) cout << ans+b << endl;
else cout << ans-b << endl;
}
