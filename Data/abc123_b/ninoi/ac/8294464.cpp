#include <bits/stdc++.h>
using namespace std;

int main() {
vector<int> vec(5);
int A = 10;
int ans = 0;

for (int i = 0; i < 5; i++) {
  cin >> vec.at(i);
  if (vec.at(i) % 10 != 0) {
    A = min(A, vec.at(i) % 10);
    ans += vec.at(i) / 10 * 10 + 10;
  }
  else ans += vec.at(i);
}

if (A == 10) cout << ans << endl;
else cout << ans - (10 - A) << endl;
}