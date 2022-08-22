#include <bits/stdc++.h>
using namespace std;

int f(int n) { return (n + 9) / 10 * 10; }

int main()
{
  vector<int> A(5);
  for (int &i : A) cin >> i;
  
  int ans = numeric_limits<int>::max();
  
  for (int a = 0; a < 5; a++) {
    for (int b = 0; b < 5; b++) {
      if (b == a) continue;
      for (int c = 0; c < 5; c++) {
        if (c == a || c == b) continue;
        for (int d = 0; d < 5; d++) {
          if (d == a || d == b || d == c) continue;
          for (int e = 0; e < 5; e++) {
            if (e == a || e == b || e == c || e == d) continue;
            ans = min(ans, f(A.at(a)) + f(A.at(b)) + f(A.at(c)) + f(A.at(d)) + A.at(e));
          }
        }
      }
    }
  }
  
  cout << ans << '\n';
}