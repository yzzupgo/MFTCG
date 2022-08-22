#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
#define ld long double
#define el '\n'
#define _3m_Sevawy ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ordered_set tree<int , null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
using namespace std;
const ll N = 1e5 + 5,mod = 1e9 + 7, inf = 2e18, p = 31, lg = 20;
int main() {
_3m_Sevawy
int t = 1;
while (t--) {
int x,y;
cin >> x >> y;
for (int i = 1; i <= x; ++i) {
if((i * 2) + ((x - i) * 4) == y)
return cout << "Yes\n",0;
}
cout << "No\n";
}
return 0;
}
