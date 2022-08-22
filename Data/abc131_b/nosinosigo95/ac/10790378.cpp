#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = a; i < (b); i++)
#define rrep(i,a,b) for (int i = a; i >= b; i--)
#define all(x) (x).begin(), (x).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = 2e9;
const int MOD = 1e9 + 7;
int main() {
int n, l;
cin >> n >> l;
vector<int> taste(n);
int sum = 0;
rep(i, 0, n) {
taste[i] = l + i;
sum += taste[i];
}
int mn = 1000;
int ans;
rep(i, 0, n) {
if (mn > abs(taste[i])) {
mn = abs(taste[i]);
ans = sum - taste[i];
}
}
cout << ans << endl;
return 0;
}
