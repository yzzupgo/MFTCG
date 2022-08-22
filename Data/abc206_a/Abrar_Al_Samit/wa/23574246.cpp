#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define debug(x) cerr << '[' << (#x) << "] = " << x << '\n';
template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update> ;
void PlayGround() {
int p;
cin >> p;
p = 1.08 * p;
if(p == 206) {
cout << "so-so\n";
} else if(p < 206) {
cout << "Yay!\n";
} else {
cout << ": (\n";
}
#ifndef ONLINE_JUDGE
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
}
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
#endif
PlayGround();
return 0;
}
