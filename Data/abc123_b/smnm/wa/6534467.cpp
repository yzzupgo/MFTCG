#include <bits/stdc++.h>
using namespace std;
int main(void){
  int x[5];
  for(int i=0; i<5; i++) cin >> x[i];
  int y[5];
  priority_queue<pair<int, int>> que;
  for(int i=0; i<5; i++) {
    if(x[i]%10 == 0) y[i] = 0;
    else y[i] = 10 - x[i]%10;
    que.push(make_pair(y[i], x[i]));
  }
  int ans = 0;
  for(int i=0; i<5; i++) {
    auto tmp = que.top(); que.pop();
    ans += tmp.second;
    if(i != 4 && ans%10 != 0) ans = (ans/10 + 1)*10;
  }
  cout << ans << endl;
}