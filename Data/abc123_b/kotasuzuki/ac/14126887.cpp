#include <bits/stdc++.h>
using namespace std;

int main()
{ 
  int a, a_one, sum_a = -10, min_a_one = 10;

  for (int i = 0; i < 5; i++)
  {
    cin >> a;
    sum_a += ((a - 1) / 10 + 1) * 10;
    min_a_one = min((a % 10 == 0 ? 10 : a % 10), min_a_one);
  }
  cout << sum_a + min_a_one << endl;
}