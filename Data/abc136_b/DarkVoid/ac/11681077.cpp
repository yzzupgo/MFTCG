#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#define IO(i,o) freopen(i, "r", stdin), freopen(o, "w", stdout)
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count());
int n;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin >> n;
int sum = 0;
for(int i = 1; i <= n; i++){
string str = to_string(i);
if((int)str.length() % 2) sum++;
}
cout << sum << "\n";
return 0;
}
