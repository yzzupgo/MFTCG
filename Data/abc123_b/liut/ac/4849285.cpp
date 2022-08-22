#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  vector<int> dishes = {a, b, c, d, e};
  sort(dishes.begin(), dishes.end());
  int ans = 1000;
  do {
    int sum = 0;
    for (int i = 0; i < dishes.size() - 1; i++) {
      sum += ((dishes[i] / 10) + 1) * 10;
      if (dishes[i] % 10 == 0) sum -= 10;
    }
    sum += dishes.back();
    ans = min(ans, sum);
  } while (next_permutation(dishes.begin(), dishes.end()));
  cout << ans << endl;
  return 0;
}
