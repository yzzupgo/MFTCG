#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int A, B, C, D, E;
  cin >> A >> B >> C >> D >> E;
  int pseudo = ((A+9)/10 + (B+9)/10 + (C+9)/10 + (D+9)/10 + (E+9)/10) * 10;
  // cout << pseudo << endl;
  int res = 10;
  if (A%10 != 0 && A%10 <= res) res = A%10;
  if (B%10 != 0 && B%10 <= res) res = B%10;
  if (C%10 != 0 && C%10 <= res) res = C%10;
  if (D%10 != 0 && D%10 <= res) res = D%10;
  if (E%10 != 0 && E%10 <= res) res = E%10;
  int ans = pseudo - (10 - res);
  cout << ans << endl;
  return 0;
}