#include <bits/stdc++.h>
using namespace std;
int main() {
int N, L;
cin >> N >> L;
int ans = 0;
for (int i = 1; i <= N; ++i) {
ans += L + i - 1;;
}
if (L < 0) {
if (N < abs(L + 1)) {
ans -= L + (N - 1);
}
} else if (0 < L) {
ans -= L;
}
cout << ans << endl;
return 0;
}
