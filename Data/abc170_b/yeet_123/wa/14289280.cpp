#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
typedef long double ld;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define mod 1000000007
#define inf 1000000000000000000
#define bpc(x) __builtin_popcountll(x)
#define autoit(x,it) for(auto it = x.begin(); it != x.end(); it++)
#define rep(n) for(ll i = 0; i < n; i++)
#define repi(i,n) for(ll i = 0; i < n; i++)
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
int main()
{
FAST
ll x,y;
cin>>x>>y;
for(ll i=0;i<=100;i++)
{
if(i*2 + (x-i)*4 == y)
{
cout<<"Yes";
return 0;
}
}
cout<<"No\n";
return 0;
}
