#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef int ll;
typedef unsigned long long int sll;
typedef long double ld;
#define A 1000000007
#define D 100000000000000ll
#define B 998244353ll
#define C 1000000000000000000ll
#define M 4000
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define oset tree<pair<ll,ll>, null_type,less_equal<pair<ll,ll>>, rb_tree_tag,tree_order_statistics_node_update>
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define mxe(v) *max_element(v.begin(),v.end())
#define mne(v) *min_element(v.begin(),v.end())
#define bs binary_search
#define lb lower_bound
#define ub upper_bound
#define ve vector
#define br break
#define PI acos(-1)
#define subt cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n"
int main()
{
FAST;
ll x,y;
cin>>x>>y;
if(y>=(2*x) && y<=(4*x) && y%2==0)
cout<<"Yes";
else
cout<<"No";
subt;
return 0;
}
