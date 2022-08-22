#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> order(5);
  for (int i=0; i<5; ++i) {
    cin >> order[i];
  }
  
  int time=0;
  vector<int> var(5);
  for (int i=0; i<5; ++i) {
    time += int((order[i]+9)/10)*10;
  }
  
  vector<int> mod10(5);
  for (int i=0; i<5; ++i) {
    mod10[i] = (200-order[i])%10;
  }
  int amari = *max_element(mod10.begin(), mod10.end());
  if (amari != 0) {
    time -= (10-amari);
  }
  cout << time << endl;
  return 0;
}





