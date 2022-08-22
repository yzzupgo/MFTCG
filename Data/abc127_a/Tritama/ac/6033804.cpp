#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n) for(int i=0;i<(n);++i)
#define REPr(i,n) for(int i=(n)-1;i>=0; --i)
#define FORq(i,m,n) for(int i = (m);i <= (n);++i)
#define FORqr(i,m,n) for(int i = (n);i >=(m);--i)
#define PB push_back
#define MP make_pair
#define DEBUG printf("%s\n","debug")
#define fst first
#define snd second
#define SIN(x,S) (S.count(x) != 0)
#define M0(x) memset(x,0,sizeof(x))
#define FILL(x,y) memset(x,y,sizeof(x))
#define MM(x) memset(x,-1,sizeof(x))
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef pair<int, int> PII;
typedef pair<long long, long long> PLL;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<long long> VL;
typedef long long ll;
typedef long long integer;
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }
ll MOD = 1000000007;
template<class T>
inline bool chmin(T &a, T b) {
if (a > b) {
a = b;
return true;
}
return false;
}
template<class T>
inline bool chmax(T &a, T b) {
if (a < b) {
a = b;
return true;
}
return false;
}
int main() {
int A,B,ans; cin >> A >>B;
ans = 0;
if(A>=13){ans = B;}
else if(A>=6){ans = B/2;}
cout << ans << endl;
}
