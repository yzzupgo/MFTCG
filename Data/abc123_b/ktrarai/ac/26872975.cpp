#include <bits/stdc++.h>
using namespace std;

int main()
{
  int A, ans = 0, min1;
  
  for (int i = 0; i < 5; i++) {
    cin >> A;
    ans += (A + 9) / 10 * 10;
    if (i == 0 || A % 10 > 0 && min1 % 10 > A % 10)
      min1 = A;
  }
  
  ans += min1 - (min1 + 9) / 10 * 10;
  
  cout << ans << '\n';
}