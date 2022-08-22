#include<bits/stdc++.h>
using namespace std;

int main(){
      int ans = 0;
      for(int i = 0;i < 5;i++){
            int t;cin >> t;
            ans += t + (10 - (t % 10));
      }
      cout << ans;
}