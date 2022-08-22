#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;

typedef long long ll;

const int INF = 1 << 30;
const ll LLINF = 1LL << 62;

int mod = 1000000007;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int A[5]; rep(i, 5) cin >> A[i];
    int mn = 9;
    rep(i, 5) if(A[i]%10 > 0) mn = min(mn, A[i]%10);
    int ans = 0;
    rep(i, 5){
        if(A[i]%10 > 0) ans += A[i] + (10-A[i]%10);
        else ans += A[i];
    }
    ans -= 10-mn;
    cout << ans << endl;
    return 0;
}