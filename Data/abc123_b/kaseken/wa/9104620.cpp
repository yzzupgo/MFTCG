#include <bits/stdc++.h>
using namespace std;
 
int main() {
  vector<int> dishes(5);
  for (int i = 0; i < 5; i++) { cin >> dishes.at(i); }
  int fst = 9;
  int last = -1;
  int count = 0;
  for (int i = 0; i < 5; i++) {
    int r;
    r = dishes.at(i) % 10;
    if (r < fst && r != 0) {
      fst = r;
      last = i;
    }
    if (r == 0) { count += dishes.at(i); }
    else { count += (dishes.at(i) / 10 + 1) * 10; }
  }
  if (last == -1) { cout << count << endl; }
  else { cout << count - (10 - (dishes.at(last) % 10)) << endl; }
}