#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin() , (x).end()
#define rep(i,a,b) for( ll i = a ; i < b ; i+=1 )
#define pp pair<ll,ll>
#define sz(v) int(v.size())
#define hell (ll)1000000007
#define hell1 (ll)100000009
#define hell2 (ll)998244353
ll t = 1 ;
void solve()
{
ll a , b ;
cin >> a >> b ;
cout << max(a+b,max(a-b,a*b));
}
signed main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
while(t--){
solve();
}
return 0 ;
}
