#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long int
#define endl '\n'
#define BLOCK 555
#define mod 1000000007
const int inf = (1LL << 60) - 1;
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
const int N = 3e5 + 5;
const int C = 505;
vector<int> graph[N];
vector<bool> visited(N);
int arr[N], b[N];
int dp[C][C];
int n, m, k;
string s;
void solve() {
cin >> n;
double ans = floor((double)n * 1.08);
cout << ans << endl;
if(ans < 206) {
cout << "Yay!" << endl;
return;
}
if(ans == 206) {
cout << "so-so" << endl;
return;
}
cout << ":(" << endl;
}
int32_t main() {
ios::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int T = 1;
int t = 1;
while(T--) {
solve();
t++;
}
}
