#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
using namespace __gnu_pbds;
using namespace std;
typedef tree<long long, null_type, less<long long>, rb_tree_tag,
tree_order_statistics_node_update>
new_data_set;
typedef long long ll;
typedef long double ld;
ll a,b,c,n,m,k,t=1;
void solve()
{
cin>>n>>m;
for(ll i=0;i<=n;i++)
{
if(i*2+(n-i)*4==m)
{
cout<<"Yes";return;
}
}
cout<<"No";
if(t>0)cout<<"\n";
}
int32_t main()
{
#ifdef ONPC
freopen("input.txt", "r", stdin);
#endif
ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
while(t--)
{
solve();
}
return 0;
}
