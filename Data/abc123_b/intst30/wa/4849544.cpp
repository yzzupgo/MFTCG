#include <bits/stdc++.h>
using namespace std;

int main() {
  int array[5], mod[5];
  for (int i = 0; i < 5; ++i) {
    cin >> array[i];
    mod[i] = array[i] % 10;
  }
  
  int sum = 0;
  int min = 9;
  int min_index = 0;
  for (int i = 0; i < 5; ++i) {
    if (!mod[i])
      sum += array[i];
    else if (min > mod[i]) {
      min = mod[i];
      min_index = i;
    }
  }
  
  for (int i = 0; i < 5; ++i) {
    if (mod[i] && i != min_index)
      sum += (array[i] + 10) / 10 * 10;
  }
  
  cout << sum + array[min_index] << endl;
}