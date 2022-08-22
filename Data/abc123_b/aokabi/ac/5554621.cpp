#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <utility>
#include <string>
#include <stack>
#include <regex>
 
#define REP(i, n) for (int i = 0; i < n; i++)
#define ALL(v) (v).begin(), (v).end()
 
using namespace std;
 
typedef long long ll;

int main(int argc, char const *argv[])
{
  int a[5];
  int min_val = 10;
  int res = 0;
  REP(i,5){
    cin >> a[i];
    if (a[i]%10 != 0) {
      min_val = min(min_val,a[i]%10);
      res+= (10+a[i]-a[i]%10);
    }
    else {
      res+=a[i];
    }
  }
  if (min_val!=10) res -= 10-min_val;
  cout << res << endl;

  return 0;
}
