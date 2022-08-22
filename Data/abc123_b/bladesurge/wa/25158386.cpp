#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> a(5);
  for (int i=0; i<5; i++) cin >> a[i];
  int mn = 10;
  int k;
  int sum = 0;
  for (int i=0; i<5; i++) {
    if (a[i]%10 < mn) {
      k = i;
      mn = a[i]%10;
    }
  }
  for (int i=0; i<5; i++) {
    if (i == k) sum += a[i];
    else {
      a[i] = (a[i]+9)/10*10;
      sum += a[i];
    }
  }
  cout << sum << endl;
}     