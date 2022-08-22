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
for (int i = 0; i <= X; i++) {
if (i*2 + (X-i)*4 == Y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
