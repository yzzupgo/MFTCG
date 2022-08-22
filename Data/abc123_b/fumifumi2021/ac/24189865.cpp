#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define _GLIBCXX_DEBUG
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

////////////////////////////////////////////////////////

int main() {
  int ans = 0;
  int small = 10;
  for(int i = 0;i < 5;i++){
    int x;
    cin >> x;
    if(x%10 != 0){
      small = min(small,x%10);
      x = (x/10+1)*10;
    }
    ans += x;
  }
  cout << ans + small -10 << endl;
    
  
}