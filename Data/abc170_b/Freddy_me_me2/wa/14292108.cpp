#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define rep2(i,s,n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;
#define ALL(v) v.begin(), v.end()
#define vmax(v) *max_element(ALL(v))
#define vmin(v) *min_element(ALL(v))
#define chmax(x,a) x = max(x, a)
#define chmin(x,a) x = min(x, a)
int main() {
int X, Y; cin >> X >> Y;
if (Y%2 || 4*X < Y) {
cout << "No" << endl;
}
else cout << "Yes" << endl;
}
