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
int target_idx;
rep(i, N) {
int target = sum - t[i];
if (ans > abs(sum - target)) {
ans = abs(sum - target);
target_idx = i;
}
}
cout << sum - t[target_idx] << endl;
}
