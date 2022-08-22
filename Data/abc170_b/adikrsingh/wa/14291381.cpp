#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define FAST std::ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pi acos(-1)
#define mp make_pair
#define pb push_back
#define ALL(v) v.begin(), v.end()
#define SORT(v) sort(ALL(v))
#define REVERSE(v) reverse(ALL(v))
#define F first
#define S second
#define ppb pop_back
#define GCD(m,n) __gcd(m,n)
#define LCM(m,n) (m*n)/GCD(m,n)
#define rep(i,a,n) for(int i=a ; i<n ; i++)
#define repe(i,a,n) for(int i=a;i<=n;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define int long long
#define MOD 1000000007
#define POD 998244353
#define ld long double
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<vvvi> vvvvi;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<vvc> vvvc;
typedef vector<pii > vpii;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef map<int,int> mii;
typedef unordered_map<int,int> umii;
typedef map<char,int> mci;
#define itv for(auto it= v.begin(); it != v.end(); ++it )
#define present(container,element) (container.find(element) != container.end())
#define cpresent(container,element) (find(ALL(container),element) != container.end())
#define bs binary_search
#define lb(v,val) lower_bound(ALL(v), val)
#define ub(v,val) upper_bound(ALL(v), val)
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define maxc(v) *max_element(ALL(v))
#define minc(v) *min_element(ALL(v))
#define vin(v,n) ; vi v(n); rep(i,0,n) cin>>v[i];
#define dbg cerr <<"At line "<<__LINE__<<" move "<<nl
#define dbg1(x) cerr <<"At line "<<__LINE__<<" "<<#x<<"="<<x<<nl
#define dbg2(x,y) cerr <<"At line "<<__LINE__<<" "<<#x<<"="<<x<<" "<<#y<<"="<<y<<nl
#define dbg3(x,y,z) cerr <<"At line "<<__LINE__<<" "<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<nl
#define prv(v) ; rep(i,0,sz(v)) cerr<<v[i]<<" ";
#define nl "\n"
#define sz(s) (int)((s).size())
#define coutsp(k) cout<<setprecision(k)
#define coutfsp(k) cout<<fixed<<setprecision(k)
#define isvowel(a) (a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
#define INF (int)1e18
void dquit()
{
int x,y; cin>>x>>y;
int b=y-x;
int a=x-b;
if(a>=0&&b>=0)
cout<<"Yes";
else
cout<<"No";
}
signed main()
{
FAST
int t; t=1;
int co=1;
while(t--)
{
dquit();
cout<<nl;
co++;
}
return 0;
}
