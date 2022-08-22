#include <iostream>

using namespace std;

int main()
{
  int sum = 0;
  int d[6];
  for (int i = 0; i < 5; i++) {
    cin >> d[i];
    sum += d[i] % 10 ? (d[i] / 10 + 1) * 10 : d[i];
  }

  int min_diff = 9;
  for (int i = 0; i < 5; i++) {
    if (d[i] % 10 != 0 && d[i] % 10 < min_diff)
      min_diff = d[i] % 10;
  }

  cout << sum - (10 - min_diff) << endl;

  return 0;
}