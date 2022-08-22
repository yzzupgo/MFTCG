#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,a,b) for (int i = (a); i < (b); ++i)

#define INF 100000000

int main(){
    int a[5];
    rep(i,5) cin>>a[i];

    int ans =0;
    int hasu = INF;
    rep(i,5){
        ans += ((a[i]+9)/10)*10;
        if(a[i]%10 != 0){
            hasu = min(hasu, a[i]%10);
        }
    }

    cout << ( hasu == INF ? ans :  ans +(hasu -10)) <<endl;
    
    return 0;
}