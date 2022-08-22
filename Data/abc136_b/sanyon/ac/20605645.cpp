#include <bits/stdc++.h>
using namespace std;
#define repd(i,a,b) for (ll i=(a);i<(b);i++)
#define rep(i,n) repd(i,0,n)
#define all(x) (x).begin(),(x).end()
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;
typedef pair<ll,ll> P;
typedef vector<ll> vec;
using Graph = vector<vector<ll>>;
const long long INF = 1LL<<60;
const long long MOD = 1000000007;
#define int long long
signed main()
{
ios::sync_with_stdio(false);
cin.tie(0);
int n;cin>>n;
int ans=0;
repd(i,1,n+1){
int a=i;
int cnt=0;
while(a!=0){
cnt++;
a/=10;
}
if(cnt%2)ans++;
}cout<<ans<<endl;
return 0;
}
