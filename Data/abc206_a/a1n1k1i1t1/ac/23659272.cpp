#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define S second
#define F first
#define inf 1e9
#define llinf 1e18
#define loop(i,a,b,c) for (int i = (a); i <= (b); i = i + (c))
using namespace std;
int mod = 1e9 + 7;
void solve() {
ll n;
cin >> n;
ll ans = n * 1.08;
if(ans < 206) {
cout << "Yay!\n";
} else if(ans == 206) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
}
int32_t main() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
IOS;
int t = 1;
while(t--) {
solve();
}
return 0;
}
