#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
#define ff first
#define ss second
#define pb push_back
#define sz size()
#define mp make_pair
#ifndef ONLINE_JUDGE
#include "/home/asif/Codes/Library/debug.h"
#endif
const int N = 1e5 + 5;
const int MOD = 1e9 + 7;
int main() {
ll x, y;
cin >> x >> y;
if( (4 * x - y) < 0 or (4* x - y) % 2)cout << "No" << endl;
else cout << "Yes" << endl;
return 0;
}
