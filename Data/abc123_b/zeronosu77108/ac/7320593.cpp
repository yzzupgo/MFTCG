#include <iostream>
#include <vector>
#include <utility>
#include <map>
#include <algorithm>
#include <queue>
#include <cmath>

using namespace std;

int main() {
  int ans = 0;
  int smax = -1;
  for (int i=0; i<5; i++) {
    int a;
    cin >> a;
    int s = (10 - (a%10))%10;
    ans += (a+s);
    smax = max(smax, s);
  }

  cout << (ans - smax) << endl;
}