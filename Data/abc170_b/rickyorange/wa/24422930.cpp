#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=(a); i<(n); i++)
#define rrep(i,a,n) for(int i=(a); i>=(n); i--)
#define all(n) begin(n),end(n)
#define rall(n) rbegin(n),rend(n)
#define fore(i,a) for(auto &i:a)
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
ll myceil(ll a,ll b){return (a+(b-1))/b;}
ll myfloor(ll a,ll b){return a/b;}
template <typename T> inline bool chmin(T& a, const T& b) {bool compare = a > b; if (a > b) a = b; return compare;}
template <typename T> inline bool chmax(T& a, const T& b) {bool compare = a < b; if (a < b) a = b; return compare;}
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
void _main() {
int x,y;
cin>>x>>y;
bool ok = false;
rep(i,1,x+1) {
if(i*2+(x-i)*4==y) ok = true;
}
puts(ok?"Yes":"No");
}
