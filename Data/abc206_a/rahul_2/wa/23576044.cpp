#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
#include <iostream>
using namespace __gnu_pbds;
using namespace std;
#define int long long
#define mod 1000000007
void solve() {
double n;
cin >> n;
n = 1.08 * n;
n = (int)(n);
if(n < 206) {
cout << "Yay!\n";
} else if(n == 206) {
cout << "so so\n";
} else {
cout << ":(\n";
}
return;
}
int32_t main() {
#ifndef ONLINE_JUDGE
freopen("inp.txt", "r", stdin);
freopen("m3.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
t = 1;
while(t--) {
solve();
}
return 0;
}
