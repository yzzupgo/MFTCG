#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <functional>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define mk make_pair
template <class key, class cmp = std::less<key>>
using ordered_set = tree<key, null_type, cmp, rb_tree_tag, tree_order_statistics_node_update>;
const ll mod = 1e9 + 7;
void solve()
{
ll n, m;
cin >> n >> m;
for (int i = 0, j = n; i <= n; i++, j--)
{
if (((i * 2) + (j * 4)) == m)
{
cout << "Yes" << endl;
return;
}
}
cout << "No" << endl;
}
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
solve();
return 0;
}
