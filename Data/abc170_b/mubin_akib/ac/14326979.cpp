#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;
typedef pair <int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
const int mod = 1e9 + 7;
const char nl = '\n';
void solve() {
int x, y;
cin >> x >> y;
if((x == 1 and y == 2) or (x == 1 and y == 4)){
cout << "Yes" << nl;
return;
}
for(int i = x * 2; i <= x * 4; i += 2){
if(i == y) {
cout << "Yes" << nl;
return;
}
}
cout << "No" << nl;
}
int main() {
#ifndef ONLINE_JUDGE
#endif
ios_base::sync_with_stdio(0);
cin.tie(0);
solve();
return 0;
}
