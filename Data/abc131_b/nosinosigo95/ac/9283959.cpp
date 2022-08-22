#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++)
typedef long long llong;
int main() {
int N, L;
cin >> N >> L;
vector<int> taste(N);
rep(i, N) taste[i] = L + i;
int ans;
int sum = 0;
rep(i, N) sum += taste[i];
int min_diff = 100 + 200 + 1;
rep(i, N) {
if (abs(taste[i]) < min_diff) {
ans = sum - taste[i];
min_diff = abs(taste[i]);
}
}
cout << ans << endl;
return 0;
}
