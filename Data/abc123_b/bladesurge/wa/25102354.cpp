#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> d(5);
  for (int i=0; i<5; i++) cin >> d[i];
  int rmin = 10;
  int x;
  for (int i=0; i<5; i++) {
    if (d[i]%10 == 0) continue;
    else if (rmin > d[i]%10) {
      rmin = d[i]%10;
      x = i;
    }
  }
  int sum = 0;
  for (int i=0; i<5; i++) {
    if (i != x) {
      int t = (d[i]+9)/10;
      sum += t*10;
    }
    else sum = d[i];
  }
  cout << sum << endl;
}