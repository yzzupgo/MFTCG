#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)


int maxtime(int x){
    return (x+9)/10*10;
}

int remtime(int x){
    return maxtime(x) - x;
}


int main(){
    int a[5];
    rep(i,5) cin>>a[i];

    int ans = 0;
    int rem = 0;
    rep(i,5){
        ans += maxtime(a[i]);
        rem = max(rem, remtime(a[i]));
    }

    cout << ans -rem << endl;

    return 0;
}