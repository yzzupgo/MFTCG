#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
#define pi acos(-1)
#define pb push_back
#define F first
#define S second
#define forr(i,a,b) for(ll i = (ll)a, asdf = (ll)b ; i < asdf; ++i)
#define fore(i,a,b) for(ll i = (ll)a, asdf = (ll)b ; i >= asdf; --i)
#define fori(i,a,b,c) for(ll i = (ll)a, asdf = (ll)b, INC = (ll) c; i < asdf; i+=INC)
#define sz(x) (ll)x.size()
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define b_p(n) __builtin_popcountll(n)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
const long long lim = 1e18;
int main(){
optimizar_io
ll x, y;
cin>>x>>y;
if(2LL*x <= y && y<=4LL*x && y%2LL==0LL)cout<<"Yes\n";
else cout<<"No\n";
return 0;
}
