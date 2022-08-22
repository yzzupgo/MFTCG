#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define beg(i,n) for(ll i=0;i<n;i++)
#define beg1(i,n) for(ll i=1;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define nl "\n"
#define sp " "
#define vec(v,n) vector<ll> v(n)
#define all(x) x.begin() , x.end()
#define pii pair<int , int>
#define pll pair<ll , ll>
#define mii map<int , int>
#define mll map<ll , ll>
#define mlb map<ll , bool>
#define msi map<string , int>
#define mci map<char , int>
#define f1 first
#define f2 second
const ll MOD2 = 998244353 ;
const ll MOD = 1e9 + 7 ;
const ll MAX = 1e5 + 7 ;
const ll inf = 1e18L + 5 ;
const double pi = 3.14159265358979323846 ;
ll fpow(ll n , ll m ){ll res=1 ;while(m>0){if(m&1){res*=n ;}m/=2 ;n*=n ;}return res;}
ll modInv(ll n){return fpow(n , MOD-2);}
const ll nax = 1e5 + 5 ;
void solve(){
ll x , y ;
cin >> x >> y;
ll xtra = y - 2*x ;
if(xtra < 0 || xtra&1) cout << "No" << nl ;
else if(xtra/2 <= x) cout << "Yes" << nl ;
else cout << "No" << nl ;
}
int main(){
fast ;
int t=1 ;
while(t--){
solve() ;
}
return 0;
}
