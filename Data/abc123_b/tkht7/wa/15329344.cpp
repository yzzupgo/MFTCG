#include <iostream>
#include <vector>
#include <cmath>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;

int main(){
  vector<int> a(5);
  int x = 9;
  int ans = 0;
  rep(i, 5){
    cin >> a[i];
    int y = a[i] % 10;
    if (y != 0) x = min(x, y);
    a[i] += 9;
    a[i] = a[i] / 10 * 10;
    ans += a[i];
  }
  ans -= (10 - x);
  cout << ans << endl;
  
  return 0;
}