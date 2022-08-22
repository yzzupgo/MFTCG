#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; ++i)
#define rep2(i,s,n) for (int i = s; i < n; ++i)
#define all(a) a.begin(),a.end()
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int a[5];
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
    int ans = 0;
    rep(i,5) ans += (a[i]+9)/10*10;
    int subt = 0;
    rep(i,5) subt = max(subt,10-(a[i]%10));
    ans -= subt;
    cout << ans << endl;
}