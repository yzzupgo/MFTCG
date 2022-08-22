#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define sz(x) int(x.size())
using namespace std;
int N, L;
int t[200];
int main() {
cin >> N >> L;
rep(i, N) {
t[i] = L + i;
}
int sum = accumulate(t, t + N, 0);
int ans = 1000000;
rep(i, N) {
int target = sum - t[i];
ans = min(ans, abs(sum - target));
}
cout << sum - ans << endl;
}
