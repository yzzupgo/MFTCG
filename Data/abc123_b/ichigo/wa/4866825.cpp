#include<bits/stdc++.h>
 
#define reps(i,f,n) for(int i = f; i < n; ++i)
#define rep(i,n) reps(i,0,n)
 
using namespace std;
 
int main(void){
    int ans = 0;
    vector<int> a;
    a.resize(5);
    int m = 10;
 
    rep(i, a.size()){
        cin >> a[i];
        if(a[i] % 10 < m){
            m = a[i] % 10;
        }
    }
    rep(i, a.size()){
        if(a[i] %10 != m){
          if(a[i]%10 != 0){
            ans += a[i] + (10 - a[i] % 10);
          }else{ans += a[i];}
        }else{
            ans += a[i];
            m = 10;
        }
    }
    cout << ans << endl;
    return 0;
}