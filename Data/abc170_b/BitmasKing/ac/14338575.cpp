#include <bits/stdc++.h>
#define f(i,a,b) for( ll i = a; i < b ; i++ )
#define af(i,a,b) for( ll i = a; i >= b ; i--)
#define rep(i,a,b,k) for(ll i = a; i < b ; i+= k )
#define arep(i,a,b,k) for( ll i = a; i >= b ; i-= k)
#define ones(x) (ll) __builtin_popcount(x)
#define fs first
#define sc second
#define pb push_back
#define po pop_back
#define mp make_pair
#define sz(a) (ll) a.size()
#define all(a) a.begin(), a.end()
#define sor(a) sort( a.begin(), a.end() )
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ller ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define PI 3.1415926535
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> ii ;
typedef vector<ll> vi ;
typedef vector<ii> vii ;
const ll MAX = 100400;
const ll inf = 1e18+5;
int main() {
fastio;
ll x,y;
cin>>x>>y;
if(x*4>=y && y%2==0 && y>=x*2) yes;
else no;
return 0;
}
