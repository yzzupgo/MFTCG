#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
#define pb push_back
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
using pi = pair<int, int>;
#define f first
#define s second
#define mp make_pair
void setIO(string name = "") {
cin.tie(0)->sync_with_stdio(0);
if(sz(name)) {
freopen((name + ".in").c_str(), "r", stdin);
freopen((name + ".out").c_str(), "w", stdout);
}
}
void solve() {
float n;
cin >> n;
n = n * 1.8;
int ans = (int)floor(n);
if(n == 206) {
cout << "so-so" << endl;
} else if(n < 206) {
cout << "Yay!" << endl;
} else {
cout << ":(" << endl;
}
}
int main() {
solve();
return 0;
}
