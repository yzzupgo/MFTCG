#include <bits/stdc++.h>
using namespace std;
#define rep(n) for(int i=0; i<(int)(n); i++)
#define rep2(i,n) for (int i=0;i<(n);i++)
#define rep3(i,a,b) for (int i=a;i<=(b);i++)
#define out(ans) cout << ans << endl;
#define outs(ans) cout << ans;
using ll = long long;

int main(){

    //imput n, a(n), b(n)
    vector <int> a(5);
    rep(5){ cin >> a[i]; }

    //main process
    int ans=0;
    int r=9;

    rep(5){
        if(a[i]%10==0){
            ans=ans+a[i];
            
        }
        else{
            r=min(r,a[i]%10);
            ans=ans+10+(a[i]-(a[i]%10));
        }
    }

    out(ans+r-10)
    


    return 0;
}






