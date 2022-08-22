#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
#define rep(i,a,n) for (int i=(a); i<(n); i++)
#define per(i,a,n) for (int i=(a); i>(n); i--)
typedef long long ll;
const int maxn = 2e5+5;
const int mod = 1e9+7;
using namespace std;
void solve() {
ll x,y; cin >> x >> y;
rep(i,0,x+1) {
if (2*i + 4*(x-i) == y) {
cout << "Yes";
return;
}
}
cout << "No";
}
int main()
{
ios_base::sync_with_stdio(false); cin.tie(0);
#ifdef DEBUG
freopen("C:\\Users\\Fish_Brother\\Desktop\\in", "r", stdin);
#endif
solve();
return 0;
}
