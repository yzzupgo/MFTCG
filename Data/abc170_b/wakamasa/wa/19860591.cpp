#include "bits/stdc++.h"
#define rep(i,n) for(long long (i)=0;(i)<(long long)(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define int long long
#define PI (3.14159265358979323)
#define MOD (1000000007LL)
#define INF (1LL<<60LL)
#define MAX_N (10000001)
#define MAX (1000000000000000000LL)
using namespace std;
signed main() {
int x, y;
string ans="No";
cin >> x >> y;
if (2 * x <= y && y <= 4 * x) ans = "Yes";
cout << ans << endl;
}
