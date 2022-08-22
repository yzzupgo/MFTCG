#include <bits/stdc++.h>
using namespace std;
#define DB(x) cout << #x << " = " << x << endl;
#define LEFT(n) (2 * (n))
#define RIGHT(n) (2 * (n) + 1)
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> node;
const ll INF = 1e9;
const double EPS = 1e-9;
const ll MOD = (ll)(1000000007);
const ll MAXV = (ll)(2e5 + 10);
const ll MAXE = (ll)(1e6 + 10);
ll x, y;
int main(){
cin.sync_with_stdio( 0 );cin.tie( 0 );
cin >> x >> y;
cout << (max(x + y, x - y), x * y) << "\n";
return 0;
}
