#include<bits/stdc++.h>
#define rep(i,n) for (ll i = 0; i < (ll)(n); ++i)
#define repk(i,k,n) for (ll i = k; i < (ll)(n); ++i)
#define MOD 1000000007
typedef long long ll;
using namespace std;
int ans, cnt;
int main() {
cin.tie(0);
ios::sync_with_stdio(false);
int X, Y;
cin >> X >> Y;
rep(i, X+1) {
if (-2 * i + 4 * X - Y == 0) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
