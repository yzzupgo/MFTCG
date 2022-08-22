#include <bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long ull;
typedef long double ld;
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define pll pair<ll,ll>
#define pii pair<int,int>
#define len(s) s.length()
#define all(v) v.begin(),v.end()
const ll INF = INT_MAX;
const int N = 2e5 + 5;
const ll mod = 1000000007 ;
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL), cout.tie(NULL);
ll tc = 1;
while (tc--) {
ll n, m, l, r;
ll i, j;
ll y;
ll x;
cin >> x >> y;
for (i = 0; i <= x; i++) {
for (j = 0; j <= x - i; j++) {
if (2 * i + j * 4 == y) {
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
}
}
