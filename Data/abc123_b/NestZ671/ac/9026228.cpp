#include<bits/stdc++.h>
using namespace std;

int main(){
      int ans = 0;
      int minn = INT_MAX;
      bool flag = false;
      for(int i = 0;i < 5;i++){
            int t;cin >> t;
            ans += t;
            if(t % 10 != 0){
                  ans += 10 - (t % 10);
                  if(t % 10 < minn){
                        minn = t % 10;
                        flag = true;
                  }
            }
      }
      if(flag)ans -= 10 - minn;
      cout << ans;
}