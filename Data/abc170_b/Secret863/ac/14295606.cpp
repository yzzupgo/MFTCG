#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define li long
#define ll long long
#define ull unsigned long long
#define ff first
#define ss second
#define pii pair<int,int>
#define pli pair<li,li>
#define pll pair<ll,ll>
#define pb push_back
#define fo(i,k,n) for(int i = k;i<n; i++)
#define ro(i,k,n) for(int i = k; i>=n; i--)
#define tc int t;cin>>t;while(t--)
#define all(v) v.begin(),v.end()
#define inf INT_MAX
#define ninf INT_MIN
#define W(x) cout<<x<<endl
#define WW(x,y) cout<<x<<' '<<y<<endl;
#define in(x) cin>>x
#define vi vector<int>
#define vll vector<long long>
#define vpi vector<pair<int>>
#define vpll vector<pair<long long>>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define vvpi vector<vector<pair<int,int>>>
#define vvpll vector<vector<pair<long long>>>
const ll mod1 = 99844353;
const ll mod2 = 1e9+7;
template <class T>
using oset = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
void fastio()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
}
template<class T>
T power(T a,T b){
T res = (T)1;
while(b>0){
if(b&1)res = res*a;
b>>=1;
a*=a;
}
return res;
}
void solve(){
int x,y;
cin>>x>>y;
if((y>=2*x)&&(y-2*x)%2 == 0&&(4*x>=y)&&(4*x-y)%2 == 0)cout<<"Yes\n";
else cout<<"No\n";
}
signed main(){
fastio();
int t = 1;
while(t--){
solve();
}
}
