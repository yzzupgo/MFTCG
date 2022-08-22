#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define sz(x) (int)(x).size()
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
const int M = 1000000007;
const char nl = '\n';
void solve() {
int n ;
cin >> n;
int y = 1.08 * n ;
if(y < 206) {
cout << "Yay" ;
} else if(y == 206) {
cout << "so-so" ;
} else {
cout << ":(" ;
}
}
int main() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
t = 1 ;
while(t--) {
solve();
}
}
