#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n[5], maxn = 0, ans = 0;
  for(int i = 0; i < 5; ++i)
  {
    cin >> n[i];
    maxn = max(maxn, 10 - (n[i] % 10 == 0 ? 10 : n[i] % 10));
    ans += n[i] + 10 - (n[i] % 10 == 0 ? 10 : n[i] % 10);
  }
  cout << ans - maxn << endl;
}