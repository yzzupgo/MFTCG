#include <bits/stdc++.h>
using namespace std;
#define all(c) (c).begin(),(c).end()
#define FOR(i,x,n) for(int i = x; i < (int)n; i++)
#define REP(i,n) FOR(i, 0, n)
#define debug(x) #x << "=" << (x) << "(L" << __LINE__ << ")"
#define show(x) cout << #x << "=" << x << endl
#define show2(x,y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define show3(x,y,z) cout << #x << "=" << x << "," << #y << "=" << y << "," << #z << "=" << z << endl
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define rep1(i,n) for(int i=1;i<=(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
const ld eps = 1e-9, pi = acos(-1.0);
const ld EPS = 1e-8;
const int INF = INT_MAX/2;
const ll LINF = LONG_MAX/2;
const int MOD = 1000000007;
template<class T> inline void amin(T &a, const T &b) { if (b<a) a=b; }
template<class T> inline void amax(T &a, const T &b) { if (a<b) a=b; }
template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return 1; } return 0; }
int main(){
ll a, b;
cin >> a >> b;
int ans = 0;
if(a>=13){
ans = b;
}else if(a>=5){
ans = b/2;
}
cout << fixed << setprecision(10);
cout << ans << endl;
return 0;
}
