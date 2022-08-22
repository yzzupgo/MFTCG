#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> dishes(5);
  for (int i = 0; i < 5; i++) cin >> dishes.at(i);
  
  int min_dish = 10, x = 0;
  for (int i = 0; i < 5; i++) {
    if ((dishes.at(i) + 9) % 10 < min_dish) {
      min_dish = (dishes.at(i) + 9) % 10;
      x = 10 - dishes.at(i) % 10;
    }
  }
  
  int sum = 0;
  for (int i = 0; i < 5; i++) {
    sum += dishes.at(i);
    while (sum % 10 != 0) {
      sum++;
    }
  }
  cout << (x == 10 ? sum : sum - x) << endl;
}