#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i);
using ll = long long;

int main() {
  vector<int> vec(5);
  for (int i = 0; i < 5; i++) {
    cin >> vec.at(i);
  }

  int sum = 0;
  int diff = 0;

  for (int i = 0; i< 5; i++) {
    sum += vec.at(i)/10 * 10 + 10;
    diff = max(diff, 10-vec.at(i)%10);
  }

  sum -= diff;
  cout << sum << endl;
  return 0;
}