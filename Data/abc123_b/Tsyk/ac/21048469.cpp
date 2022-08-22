#include <iostream>
using namespace std;

#define rep(i,n) for(int i=0; i<(n); i++)

#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <numeric>
int main(){
  vector<int> x(5);
  int m = 10;
  rep(i,5) {
    cin >> x[i];
    if (x[i]%10) m = min(m,x[i]%10);
  }
  int ans = 0;
  rep(i,5) ans += 10*((x[i]+9)/10);
  cout << ans-(10-m) << endl;
}