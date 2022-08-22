#include <bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
using namespace std;
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int x, y;
cin >> x >> y;
if (y&1) {cout << "NO\n"; return 0;}
int mn = 2*x, mx = 4*x;
if (mn <= y && y <= mx) cout << "YES\n";
else cout << "NO\n";
}
