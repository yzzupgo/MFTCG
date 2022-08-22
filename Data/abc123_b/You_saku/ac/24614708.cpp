#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

typedef long long ll;
using namespace std;

int main(void) {
  vector<int> t(5);
  int mintot = 1000;
  cin >> t[0] >> t[1] >> t[2] >> t[3] >> t[4];
  do {
    int tot = 0;
    for (int i = 0; i < t.size(); i++) {
      if (tot % 10) tot = (tot / 10) * 10 + 10;
      tot += t[i];
    }
    mintot = min(tot, mintot);
  } while (std::next_permutation(t.begin(), t.end()));
  cout << mintot << endl;
  return 0;
}