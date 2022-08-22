#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
#define rep(i,a,n) for(ll i=(a); i<(n); i++)
#define rrep(i,a,n) for(int i=(a); i>=(n); i--)
#define all(n) begin(n),end(n)
#define rall(n) rbegin(n),rend(n)
#define fore(i,a) for(auto &i:a)
#define inf32 1e9
#define inf64 1e18
#define mod 1e9+7
ll myceil(ll a,ll b){return (a+(b-1))/b;}
ll lcm(ll a,ll b){return ll(a/__gcd(a,b))*b;}
template <typename T> inline bool chmin(T& a, const T& b) {bool compare = a > b; if (a > b) a = b; return compare;}
template <typename T> inline bool chmax(T& a, const T& b) {bool compare = a < b; if (a < b) a = b; return compare;}
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
void _main() {
int a,b;
cin>>a>>b;
rep(i,0,101) rep(j,0,101) {
if(i+j==a && i*2+j*4==b) {
cout<<"Yes"<<endl;
return;
}
}
cout<<"No"<<endl;
}
