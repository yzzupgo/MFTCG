#include <bits/stdc++.h>
using namespace std;
 
int main() {
  vector<int> x(5),y(0);
  int A,B,C,D,E,Z,W;
  cin >> A >> B >> C >> D >> E;
  x[0] = A%10;
  x[1] = B%10;
  x[2] = C%10;
  x[3] = D%10;
  x[4] = E%10;
  for (int i=0; i<5; i++) {
    if (x[i] == 0) continue;
    y.push_back(x[i]);
  }
  W = y.size();
  Z = 0;
  if (W != 0) {
  sort (y.begin(), y.end());
  Z = 10*(W-1);
  for (int i=1; i<W; i++) {
  Z -= y[i];
  }
  }
  cout << A+B+C+D+E+Z << endl;
}