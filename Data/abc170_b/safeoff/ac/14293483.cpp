#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0; i<(ll)n; i++)
#define REPR(i,n) for(ll i=(ll)n-1; i>=0; i--)
#define FOR(i,m,n) for(ll i=(ll)m; i<(ll)n; i++)
#define FORR(i,m,n) for(ll i=(ll)m-1; i>=(ll)n; i--)
#define ALL(x) (x).begin(), (x).end()
#define ASC(v) sort(ALL(v));
#define DESC(v) sort(ALL(v), greater<int>());
#define UNIQ(a) sort(ALL(a));(a).resize(unique(ALL(a)) - a.begin());
#define PRINTD(x,d) cout << fixed << setprecision(d) << x << "\n";
#define DEBUG(x) cout<<#x<<": "<<x<<"\n"
const double PI = acos(-1);
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
bool isprime(int x){ int i; if(x<2)return 0; else if(x==2) return 1; if(x%2==0) return 0; for(i=3; i*i<=x; i+=2) if(x%i==0) return 0; return 1; }
int digsum(int n) { int r=0; while(n>0) { r+=n%10; n/=10; } return r; }
vector<string> split(string s, char p){vector<string>v;stringstream m(s);string b;while(getline(m,b,p))v.push_back(b);return v;}
template<class T> bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a = b; return 1; } return 0; }
struct nya{ nya(){ cin.tie(0); ios::sync_with_stdio(false); } }nyan;
int main(){
ll X, Y; cin >> X >> Y;
REP(turu, X+1) {
REP(kame, X+1) {
if (turu*2 + kame*4 == Y && turu+kame == X) {
cout << "Yes\n";
return 0;
}
}
}
cout << "No\n";
}
