#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = (1<<30)-1;
const ll LINF = (1LL<<60)-1;
#define rep(i,n) for (int i = 0; i < n; i++)
#define sz(a) (int)(a.size())
template<class T>
bool chmax(T &a, T b) {if (a < b) {a = b;return true;}else return false;}
template<class T>
bool chmin(T &a, T b) {if (a > b) {a = b;return true;}else return false;}
int main() {
int n; cin >> n;
int ans = 0;
for (int x = 1; x <= n; x++) {
string s = to_string(x);
if (s.size()%2)
ans++;
}
cout << ans << endl;
return 0;
}
