#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<ll, ll>
#define vpll vector<pll>
#define gpll greater<pll>
#define pllpll pair<ll, pll>
#define vpllpll vector<pllpll>
#define gpllpll greater<pllpll>
#define pqMin priority_queue<pllpll, vpllpll, gpllpll>
ll MOD = 1e9 + 7;
#ifndef ONLINE_JUDGE
#define deb(x) cout << #x << " = " << x << endl;
#else
#define deb(x)
#endif
void init() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
#define ld long double
void solve() {
ld n;
cin >> n;
ld k = 1.08 * n;
ll z = (ll)k;
if(z < 206) {
cout << "Yay!" << endl;
} else if(z == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
int main() {
ll t = 1;
while(t--) {
solve();
}
}
