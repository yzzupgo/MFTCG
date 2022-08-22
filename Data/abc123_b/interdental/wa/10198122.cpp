#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> A(5);
  for (int i = 0; i < 5; i++) {
    cin >> A.at(i);
  }
  vector<int> B(5);
  for (int i = 0; i < 5; i++) {
    B.at(i) = A.at(i) % 10;
  }
  sort(B.begin(), B.end());
  int ans;
  for (int i = 0; i < 5; i++) {
    ans += (A.at(i) / 10);
  }
  ans += B.at(0);
  ans += 40;
  cout << ans << endl;
}
