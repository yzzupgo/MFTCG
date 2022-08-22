#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  vector<int> time(5);
  time = {a, b, c, d, e};
  vector<int> index;
  index = {0, 1, 2, 3, 4};
  int ans = 1000000000;
  do {
    int now = 0;
    for(int i = 0; i < 5; i++) {
      while (now % 10 != 0) now++;
      now += time.at(index.at(i));
    }
    ans = min(ans, now);
  }while (next_permutation(index.begin(), index.end()));
  cout << ans << endl;
  return 0;
}