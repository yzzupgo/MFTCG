#include <bits/stdc++.h>
using namespace std;
int f(int x) {
  return ((x - 1) / 10 + 1) * 10;
}
int main() {
  vector<int> T(5);
  int sum = 0;
  for(int i = 0; i < 5; i++) {
    cin >> T[i];
    sum += f(T[i]);
  }
  int min_time = sum;
  int ans;
  for(int i = 0; i < 5; i++) {
    if(T[i] % 10 != 0) {
      ans = sum + T[i] % 10 - 10;
    }
    if(ans < min_time) {
      min_time = ans;
    }
  }
  cout << min_time << endl;
}