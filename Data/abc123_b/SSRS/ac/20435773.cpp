#include <bits/stdc++.h>
using namespace std;
int main(){
  vector<int> t(5);
  for (int i = 0; i < 5; i++){
    cin >> t[i];
  }
  int sum = 0;
  for (int i = 0; i < 5; i++){
    sum += (t[i] + 9) / 10 * 10;
  }
  int mx = 0;
  for (int i = 0; i < 5; i++){
    mx = max(mx, (10 - t[i] % 10) % 10);
  }
  cout << sum - mx << endl;
}