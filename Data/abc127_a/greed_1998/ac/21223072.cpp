#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (long long i = 0; i < (n); i++)
using ll = long long;
using P = pair<ll, ll>;
template<class T>
bool chmax(T &a, T b) {if (a < b) {a = b;return true;}else return false;}
template<class T>
bool chmin(T &a, T b) {if (a > b) {a = b;return true;}else return false;}
int main() {
ll a, b; cin >> a >> b;
if (a >= 13) cout << b << endl;
else if (a >= 6) cout << b / 2 << endl;
else cout << 0 << endl;
return 0;
}
