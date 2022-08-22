#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define int long long
#define watch(x) cerr << (#x) << " is " << (x) << endl;
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define sz(a) (int)(a).size()
#define pii pair<int, int>
#define fi first
#define se second
#define ld long double
signed main() {
ios::sync_with_stdio(0);
cin.tie(0);
int n;
cin >> n;
ld t = 1.08 * (ld)n;
int x = floor(t);
if(x < 206) {
cout << "Yay!" << endl;
} else if(x == 206) {
cout << "So-so" << endl;
} else {
cout << ":(" << endl;
}
}
