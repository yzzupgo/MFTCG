#include <bits/stdc++.h>
using namespace std;

int main() {
  int sum = 0, mx = 0;
  for (int i; cin >> i;) sum += ((i - 1) / 10 + 1) * 10, mx = max(mx, (10 - i % 10) % 10);
  cout << sum - mx << "\n";
}