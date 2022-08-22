#include <bits/stdc++.h>
using intl = long long;
using itnl = long long;
using uintl = unsigned long long;
using itn = int;
using ld = long double;
using namespace std;
#define rep(i,n) for(intl i = 0; i < (intl)(n); i++)
#define rrep(i,n) for(intl i = (intl)(n) - 1; i >= 0; i--)
#define repi(i,a,b) for(intl i = (intl)(a); i < (intl)(b); i++)
#define rrepi(i,a,b) for(intl i = (intl)(a) - 1; i >= (intl)(b); i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define m0(x) memset(x,0,sizeof(x))
#define m1(x) memset(x,1,sizeof(x))
#define fill(x,y) memset(x,y,sizeof(x))
#define alength(a) (sizeof(a) / sizeof(a[0]))
#define debug(x) cout << #x << ":" << x << endl
#define rdebug(i,x) rep(i, alength(x))cout << #x << "[" << i << "]:" << x[i] << endl
#define rrdebug(i,j,x) rep(i, alength(x))rep(j, alength(x[i]))cout << #x << "[" << i << "][" << j << "]:" << x[i][j] << endl
#define pb push_back
#define mp make_pair
#define pii pair<intl,intl>
const intl INF = 1e9;
const intl MOD = 1e9+7;
const ld EPS = 1.0e-14;
const ld PI = acos(-1);
void fp(bool f){cout << (f ? "Yes" : "No") << endl;}
void fp(bool f, string s, string t){cout << (f ? s : t) << endl;}
template<class T> inline bool chmin(T& a, T b) { if (a > b) {a = b; return true;} return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) {a = b; return true;} return false; }
intl gcd(intl a, intl b){ if(!b)return a; return gcd(b, a % b); }
intl lcm(intl a,intl b){ return a / gcd(a, b) * b; }
intl kai(intl k){
intl a = 1;
for(int i = 2; i <= k; i++){
a *= i;
}
return a;
}
intl digit10(intl a){
intl b = 0;
do{
a /= 10;
b++;
}while(a);
return b;
}
intl n,m;
intl a,b,c,d;
string s,t;
void input_var(){
cin >> n >> m;
}
signed main(){
cout << fixed << setprecision(10);
input_var();
intl mi = n * 2;
intl ma = n * 4;
bool f = (mi <= m)&&(m <= ma);
if(f){
f = !(m % 2);
}
fp(f);
return 0;
}
