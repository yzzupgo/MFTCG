#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template<class T> using oset=tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long int
#define pb push_back
#define pii pair<ll ,ll >
#define vpii vector< pii >
#define vi vector<ll >
#define vs vector< string >
#define vvi vector< vector< ll > >
#define inf (ll)1e18
#define all(it,a) for(auto it=(a).begin();it!=(a).end();it++)
#define F first
#define S second
#define sz(x) (ll )x.size()
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repr(i,a,b) for(ll i=a;i>b;i--)
#define lbnd lower_bound
#define ubnd upper_bound
#define mp make_pair
#define whatis(x) cout << #x << " is " << x << "\n";
#define graph(n) adj(n,vector< ll > () )
#define debug(x) cout << #x << " " << x << endl;
#define debug_p(x) cout << #x << " " << x.F << " " << x.S << endl;
#define debug_v(x) {cout << #x << " "; for (auto ioi : x) cout << ioi << " "; cout << endl;}
#define debug_vp(x) {cout << #x << " "; for (auto ioi : x) cout << '[' << ioi.F << " " << ioi.S << ']'; cout << endl;}
#define debug_v_v(x) {cout << #x << "/*\n"; for (auto ioi : x) { for (auto ioi2 : ioi) cout << ioi2 << " "; cout << '\n';} cout << "*/" << #x << endl;}
int solve()
{
ll x,y;cin>>x>>y;
if(y%2==0)
{
ll b = y/2-x;
ll a = x-b;
if(a+b==x && 2*a+4*b==y) cout<<"Yes";
else cout<<"No";
}
else cout<<"No";
return 0;
}
int main()
{
auto start = chrono::high_resolution_clock::now();
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
ll test_cases=1;
while(test_cases--)
solve();
auto stop = chrono::high_resolution_clock::now();
auto duration = chrono::duration_cast<chrono::milliseconds>(stop-start);
}
