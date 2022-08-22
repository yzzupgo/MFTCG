#include <bits/stdc++.h>
using namespace std;

int main() {
  int ans = 0, mini = 10;
  
  for (int i = 0; i < 5; i++) {
    int N;
    cin >> N;
    if (N % 10 != 0) mini = min(mini, N % 10);
    ans += (N + 9) / 10 * 10;
  }

  cout << ((mini == 10) ? ans : ans + mini - 10) << "\n";
}