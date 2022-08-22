#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse2")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;
#define int long long
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pii>
#define mi map<int,int>
#define mii map<pii,int>
#define mp make_pair
#define all(a) (a).begin(),(a).end()
#define FF first
#define SS second
#define sz(x) (int)x.size()
#define endl '\n'
#define rep(i,a,b) for(int i=a;i<b;i++)
const int hell=1000000007;
int pw(int a,int b)
{
int x=a;
rep(i,1,b){a=a*x;
a%=10000000000LL;}
return a;
}
int gcd(int a,int b)
{
if(b==0)return a;
return gcd(b-a%b,a%b);
}
bool cmp(pii a,pii b)
{
return a.SS<b.SS;
}
int solve()
{
int n,l;
cin>>n>>l;
vi a;
rep(i,1,n+1)
{
a.pb(abs(l+i-1));
}
sort(all(a));
cout<<a[0];
return 0;
}
signed main()
{ int t=1;
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
cin.exceptions(cin.failbit);
clock_t time_req;
int k=1;
while(t--)
{
solve();
}
time_req = clock() - time_req;
return 0;
}
