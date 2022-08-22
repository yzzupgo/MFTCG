#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> price(5);
  for (int i = 0; i < 5; i++) cin >> price.at(i);
  
  int min = 1010101, k = 0;
  for (int i = 0; i < 5; i++) {
    if (min >= price.at(i) % 10 && price.at(i) % 10 != 0){
      min = price.at(i) % 10;
      k = i;
    }
  }
  
  int sum = 0;
  for (int i = 0; i < 5; i++) {
    if (price.at(i) % 10 == 0) {
      sum += price.at(i);
    }
    else {
      sum += price.at(i);
      while (sum % 10 != 0) {
        sum++;
      }
    }
  }
  cout << sum - (10 - min) << endl;
}