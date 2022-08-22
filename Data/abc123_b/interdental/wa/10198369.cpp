#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, D, E;
  cin >> A >> B >> C >> D >> E;
  int x = min(min(min(min(A % 10, B % 10), C % 10), D % 10), E % 10);
  int ans = (A + 9) / 10 + (B + 9) / 10 + (C + 9) / 10 + (D + 9) / 10 + (E + 9) / 10;
  if (x != 0) {
    ans = ans - 10 + x;
  }
  cout << ans << endl;
}
