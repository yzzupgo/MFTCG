#include <iostream>
#include <algorithm>
using namespace std;
int maxTime(int x){
  return (x + 9) / 10 * 10;
}
int los(int x){
  return maxTime(x) - x;
}
int main(){
  int a, b, c, d, e, ans;
  cin >> a >> b >> c >> d >> e;
  ans = maxTime(a) + maxTime(b) + maxTime(c) + maxTime(d) + maxTime(e);
  ans -= max({los(a),los(b),los(c),los(d),los(e)});
  cout << ans << endl;
}