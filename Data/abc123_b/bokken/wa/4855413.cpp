#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int pickLast(int times[5]) {
  int min = 99;
  int idx = 0;
  for (int i = 0; i < 5; i++) {
    int surplus = times[i] % 10;
    if (min > surplus && surplus != 0) {
      cout << times[i] << ":" << surplus << endl;
      min = surplus;
      idx = i;
    }
  }
  return idx;
}

int main() {
  int times[5];
  int sum = 0;
  for (int i = 0; i < 5; i++) {
    cin >> times[i];
  }
  int idx = pickLast(times);
  for (int i = 0; i < 5; i++) {
    if (i == idx) {
      continue;
    }
    sum += times[i];
    int surplus = sum % 10;
    if (surplus != 0) {
      sum += 10 - surplus;
    }
  }
  sum += times[idx];
  cout << sum;
  return 0;
}