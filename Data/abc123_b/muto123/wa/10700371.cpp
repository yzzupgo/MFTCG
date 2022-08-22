#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
  vector<int> time(5);
  int diff_max = 0, sum = 0, max_index, add_value;
  for (int i = 0; i < 5; ++i)
  {
    cin >> time[i];

    int a = 10;
    while (a < time[i]) a += 10;

    if (diff_max < a - time[i])
    {
      diff_max = a - time[i];
      max_index = i;
      add_value = a;
    }
    sum += a;
  }
  sum += time[max_index] - add_value;
  cout << sum << endl;
}