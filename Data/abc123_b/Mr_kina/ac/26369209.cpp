#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)

int main() {
    int A[5];
    rep(i,5)cin >> A[i];
    int mod =10;
    rep(i,5){
        if(A[i]%10!=0){
            mod = min(mod,A[i]%10);
        }
    }
    int ans =0;
    rep(i,5){
        if(A[i]%10==0){
            ans +=A[i];
        }else{
        ans += ((A[i]/10)*10)+10;

        }
    }
    cout << ans + mod-10 << endl;
}