#include "bits/stdc++.h"
#define rep(i,b) for(ll i=0;i<b;i++)
#define ll long long
using namespace std;
inline void IN(void){return;}
template <typename First, typename... Rest>
void IN(First& first, Rest&... rest){
cin >> first;
IN(rest...);
return;
}
#define SS(T,...) T __VA_ARGS__; IN(__VA_ARGS__);
#define SV(type,c,n) vector<type> c(n);for(auto& i:c)cin >> i;
#define Yes(n) cout << ((n) ? "Yes" : "No" ) << endl
#define First(n) cout << ((n) ? "0" : "1" ) << endl
inline int p(void){cout << endl; return 0;}
template<class Head> int p(Head&& head){cout << head;p();return 0;} template<class Head,class... Tail> int p(Head&& head,Tail&&... tail){cout<<head<<" ";p(forward<Tail>(tail)...);return 0;}
struct ProconInit {
static constexpr int IOS_PREC = 15;
static constexpr bool AUTOFLUSH = false;
ProconInit() {
cin.tie(nullptr);
ios::sync_with_stdio(false);
cout << fixed << setprecision(IOS_PREC);
if(AUTOFLUSH)
cout << unitbuf;
}
} PROCON_INIT;
#define vl vector<ll>
#define debug(x) cerr<<#x<<" "<<x<<'\n';
#define all(x) (x).begin(),(x).end()
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
bool cmp(pair<ll,ll> a, pair<ll,ll> b) { return a.second < b.second; }
ll M=1e9+7;
int main() {
SS(int,x,y);
rep(z,x+1){
int crane=z;
int turtle=x-z;
if(y==2*crane+4*turtle){
p("Yes");
return 0;
}
}
p("No");
}
