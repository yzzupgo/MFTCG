#include <iostream>
#include <string>
#include <vector>
#include <ios>
#include <iomanip>
#include <stack>
#include <queue>
#include <algorithm>

#define REP(i, n) for(int i = 0;i < n;i++)

using namespace std;

const int INF = 100000001;

int main(){
  int t[5];

  int ind = -1;
  int max = 0;

  REP(i,5){
    cin >> t[i];
    REP(j,14){
      if (10 * j - t[i] >= 0) {
        if (10 * j - t[i] >= max) {
          ind = i;
          max = 10 * j - t[i];
        }
        break;
      }
    }
  }

  int ans = 0;
  REP(i,5){
    if (i == ind) {
      continue;
    }
    REP(j,13){
      if (10 * j < t[i] && t[i] <= 10 * j + 10) {
        ans += 10 *j + 10;
        break;
      }
    }
  }
  ans += t[ind];

  cout << ans << endl;
  return 0;
}