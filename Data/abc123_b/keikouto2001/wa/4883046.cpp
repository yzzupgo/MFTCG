#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n[5], maxn = 0, ans = 0;
  for(int i = 0; i < sizeof n; ++i)
  {
    cin >> n[i];
    maxn = max(maxn, n[i]);
    ans += n[i];
  }
  cout << ans - 10 + maxn % 10 << endl;
}