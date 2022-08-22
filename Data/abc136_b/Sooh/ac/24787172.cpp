#include<bits/stdc++.h>
using namespace std;
#pragma region template
using ll = long long;
using PII = pair<int, int>;
using PLL = pair<ll, ll>;
template <class T> using V = vector<T>;
template <class T> using VV = V<V<T>>;
#define overload4(_1,_2,_3,_4,name,...) name
#define overload3(_1,_2,_3,name,...) name
#define rep1(n) for(ll i=0;i<n;++i)
#define rep2(i,n) for(ll i=0;i<n;++i)
#define rep3(i,a,b) for(ll i=a;i<b;++i)
#define rep4(i,a,b,c) for(ll i=a;i<b;i+=c)
#define rep(...) overload4(__VA_ARGS__,rep4,rep3,rep2,rep1)(__VA_ARGS__)
#define rrep1(n) for(ll i=n;i--;)
#define rrep2(i,n) for(ll i=n;i--;)
#define rrep3(i,a,b) for(ll i=b;i-->(a);)
#define rrep(...) overload3(__VA_ARGS__,rrep3,rrep2,rrep1)(__VA_ARGS__)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
#define debug(var) do{std::cerr << #var << " : ";view(var);}while(0)
template<typename T> void view(T e){std::cerr << e << std::endl;}
template<typename T> void view(const std::vector<T>& v){for(const auto& e : v){ std::cerr << e << " "; } std::cerr << std::endl;}
template<typename T> void view(const std::vector<std::vector<T> >& vv){cerr << endl;int cnt = 0;for(const auto& v : vv){cerr << cnt << "th : "; view(v); cnt++;} cerr << endl;}
std::ostream &operator<<(std::ostream &dest, __int128_t value) {
std::ostream::sentry s(dest);
if (s) {
__uint128_t tmp = value < 0 ? -value : value;
char buffer[128];
char *d = std::end(buffer);
do {
--d;
*d = "0123456789"[tmp % 10];
tmp /= 10;
} while (tmp != 0);
if (value < 0) {
--d;
*d = '-';
}
int len = std::end(buffer) - d;
if (dest.rdbuf()->sputn(d, len) != len) {
dest.setstate(std::ios_base::badbit);
}
}
return dest;
}
template<class T, class K>bool chmax(T &a, const K b) { if (a<b) { a=b; return 1; } return 0; }
template<class T, class K>bool chmin(T &a, const K b) { if (b<a) { a=b; return 1; } return 0; }
const int inf = 1001001001;
const ll INF = 1001001001001001001ll;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
ll rddiv(ll a, ll b) { return a/b-((a^b)<0&&a%b); }
ll power(ll a, ll p){ll ret = 1; while(p){if(p & 1){ret = ret * a;} a = a * a; p >>= 1;} return ret;}
ll modpow(ll a, ll p, ll mod){ll ret = 1; while(p){if(p & 1){ret = ret * a % mod;} a = a * a % mod; p >>= 1;} return ret;}
ll rudiv(ll a, ll b) { return a/b+((a^b)>0&&a%b); }
#pragma endregion
const ll mod = 1000000007;
int main(){
cin.tie(nullptr);
ios::sync_with_stdio(false);
int n; cin >> n;
int ans = 0;
for(int i = 1; i <= n; i++){
if(sz(to_string(i)) % 2) ans++;
}
cout << ans << endl;
}
