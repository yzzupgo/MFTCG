#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cstring>
#include <map>
#include <queue>
#include <cmath>
#include <complex>
using namespace std;
#define MOD 1000000007
#define ll long long
#define ld long double
#define FOR(i,a,b) for(ll i=(ll)a;i<(ll)b;i++)
#define rep(i,n) FOR(i,0,n)
#define pb push_back
#define mp make_pair
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define rmsame(a) sort(all(a)),a.erase(unique(all(a)), a.end())
#define rmvector(a,b) rep(i,a.size())rep(j,b.size())if(a[i]==b[j]){a.erase(a.begin()+i);i--;break;}
#define first_more_idx(ve,num) upper_bound(all(ve), num)-ve.begin()
#define first_lessequal_idx(ve,num) lower_bound(all(ve), num)-ve.begin()
#define pq_pair_tB priority_queue <pair<ll,ll>, vector<pair<ll,ll> > , greater<pair<ll,ll> > >
#define pq_pair_ts priority_queue <pair<ll,ll> >
template<typename X> bool exist(vector<X> vec, X item){return find(all(vec), item)!=vec.end();}
ll gcd(ll a, ll b){if(b==0)return a;return gcd(b,a%b);}
ll lcm(ll a, ll b){return a/gcd(a,b)*b;}
ll power(ll x, ll n){if(n == 0) return 1;return (n%2)? x*power(x, n-1)%MOD : power(x*x%MOD, n/2);}
bool func(ll a , ll b){
return abs(a) < abs(b);
}
int main(){
cin.tie(0);
ios::sync_with_stdio(false);
ll N , K ;
cin >> N >> K ;
vector<ll> a ;
rep(i, N){
a.pb(K + (i));
}
sort(all(a), func);
ll ans = 0;
rep(i, a.size()){
if(i == 0) continue;
ans += a[i] ;
}
cout << ans << endl;
return 0;
}
