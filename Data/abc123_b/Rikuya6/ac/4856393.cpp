#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)


vector<int> v(5);

int solve() {
  sort(v.begin(), v.end());
  int ans = 1 << 30;
  do {
    int sum{};
    int t;
    REP(i, 5) {
      sum += v[i];
      if (sum % 10 != 0 && i != 4) {
        t = 10 - (sum % 10);
        sum += t;
      }
    }
    // cout << sum << endl;
    ans = min(ans, sum);
  } while(next_permutation(v.begin(), v.end()));
  return ans;
}

int main() {
  REP(i, 5) cin >> v[i];
  cout << solve() << endl;
}
