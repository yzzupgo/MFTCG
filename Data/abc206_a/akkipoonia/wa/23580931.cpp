#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int ll
using namespace __gnu_pbds;
#define ff first
#define ss second
#define pb push_back
typedef long long ll;
#define ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define endl "\n"
void solve() {
int n;
cin >> n;
double res = n * 1.08;
if(res > 206) {
cout << ":(" << endl;
} else if(res == 206) {
cout << "so-so" << endl;
} else {
cout << "Yay!" << endl;
}
}
int32_t main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
t = 1;
while(t--) {
solve();
}
return 0;
}
