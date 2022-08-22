#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#define int long long
#define deb(x) cout << #x << ' ' << x << '\n' ;
using namespace std ;
using namespace __gnu_pbds;
typedef vector<int> vi ;
typedef long long ll ;
typedef pair<int, int> ii ;
typedef vector<ii> vii ;
typedef tree< int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update > indexed_set ;
void init() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
void solve() {
int n;
cin >> n;
double x = 1.08 * n;
int res = (int)x;
if(res > 206) {
cout << ":(";
} else if(res == 206) {
cout << "so-so" ;
} else {
cout << "Yay!";
}
}
int32_t main() {
init();
int t = 1;
cin >> t;
while(t--) {
solve();
}
return 0;
}
