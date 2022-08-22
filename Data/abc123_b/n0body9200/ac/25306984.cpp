#include <bits/stdc++.h>

using namespace std;

// Shorthand for commonly used types
using ll = long long;
using ld = long double;
using str = string;
using ii = pair<int, int>;
using vi = vector<int>;
using vii = vector<ii>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vd = vector<ld>;
using vvd = vector<vd>;

const ll INF = INT_MAX;
const ll MOD = 1e9 + 7;
const ld EPS = 1e-9;

const int MAX_N = 1e6 + 2;

const bool DEBUG = 0;

int round10(int n) {
  if (n % 10 == 0) return n;
  return n + (10 - n % 10);
}

void solve() {
  vi cost(5);
  for (int i = 0; i < 5; i++) {
    cin >> cost[i];
  }

  int ans = MAX_N;
  for (int i = 0; i < 5; i++) {
    int sum = 0;
    for (int j = 0; j < 5; j++) {
      if (i != j)
        sum += round10(cost[j]);
      else
        sum += cost[j];
      if (DEBUG) cout << sum << "\n";
    }
    ans = min(ans, sum);
  }
  cout << ans << "\n";

  return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  // int tc;
  // cin >> tc;
  // for (int i = 0; i < tc; i++)
  solve();

  return 0;
}