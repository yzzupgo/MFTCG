#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long int
#define ll long int
#define rep(i,l,n) for(int i = l; i < n; ++i)

int main(){
    int a,ans = 0;

    int k = 0;

    rep(i,0,5){
        cin >> a;
        if(a % 10 != 0 && 10 - a % 10 > k) k = 10 - a % 10;
        ans += a + 10 - a % 10;
    }

    cout << ans - k << endl;
}