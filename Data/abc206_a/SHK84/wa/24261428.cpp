#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define pii pair<int, int>
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x, y)
using namespace std;
const ll MOD = 1000000007;
const int MX = 10e6 + 6;
const ld E = 1e-9;
void solve() {
float n;
cin >> n;
int ans = 1.08 * n;
if(ans < 206) {
cout << "Yay!";
} else if(ans == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t = 1;
cin >> t;
while(t--) {
solve;
}
return 0;
}
