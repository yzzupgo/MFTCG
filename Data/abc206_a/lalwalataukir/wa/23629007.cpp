#include "bits/stdc++.h"
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define endl '\n'
#define int long long
using namespace std;
void solve() {
int N;
cin >> N;
if(1.08 * N > 206) {
cout << ":(" ;
} else if(1.08 * N == 206) {
cout << "so-so";
} else {
cout << "Yay!" ;
}
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
#ifdef LOCAL
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
auto start_timer = chrono::high_resolution_clock::now();
#endif
int t = 1;
while(t--) {
solve();
}
#ifdef LOCAL
auto stop_timer = chrono::high_resolution_clock::now();
auto duration = chrono::duration_cast<chrono::nanoseconds>(stop_timer - start_timer);
cerr << "Time taken : " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
#endif
return 0;
}
