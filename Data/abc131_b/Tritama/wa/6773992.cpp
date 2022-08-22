#include <bits/stdc++.h>
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
const int MAX = 510000;
long long fac[MAX], finv[MAX], inv[MAX];
int main() {
int ans = 0;
int N,L; cin >> N >> L;
for (int i = 0; i < N; i++)
{
ans += L+i;
}
if(L>0){ans -= L;}
else if(L+N<0){ans -= (L+N-1);}
cout << ans << endl;
}
