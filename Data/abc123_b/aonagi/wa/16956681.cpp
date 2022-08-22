#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
int main() {
  vector<int> vec(5);
  int co = 0;
  int sum = 0;
  rep(i, 5) {
    cin >> vec.at(i);
    if(vec.at(i) % 10 != 0) {
      co = max(10 - vec.at(i) % 10, co);
      vec.at(i) /= 10;
      vec.at(i) += 1;
      vec.at(i) *= 10;
    }
    sum += vec.at(i);
  }
  cout << sum - co << endl;
  cout << co;
}