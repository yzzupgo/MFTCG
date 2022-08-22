#include<iostream>
#include<map>
#include<vector>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<climits>
#include<stack>
#include<queue>
#include<set>
#include<cctype>
#include<bitset>
using namespace std;
#define REP(i,n) for (int i=0;i<(n);++i)
#define rep(i,a,b) for(int i=a;i<(b);++i)
#define p(s) std::cout << s ;
#define pl(s) std::cout << s << endl;
#define printIf(j,s1,s2) cout << (j ? s1 : s2) << endl;
#define YES(j) cout << (j ? "YES" : "NO") << endl;
#define Yes(j) std::cout << (j ? "Yes" : "No") << endl;
#define yes(j) std::cout << (j ? "yes" : "no") << endl;
#define all(v) v.begin(),v.end()
#define showVector(v) REP(i,v.size()){p(v[i]);p(" ")} pl("")
template<class T> inline bool chmin(T &a, T b){ if(a > b) { a = b; return true;} return false;}
template<class T> inline bool chmax(T &a, T b){ if(a < b) { a = b; return true;} return false;}
typedef pair<int,int> P_ii;
typedef pair<double,double> P_dd;
typedef long long int ll;
template<class T>
vector<T> make_vec(size_t a){
return vector<T>(a);
}
template<class T, class... Ts>
auto make_vec(size_t a, Ts... ts){
return vector<decltype(make_vec<T>(ts...))>(a, make_vec<T>(ts...));
}
const int MOD = 1000000007;
const ll INF = (ll)1e12;
void addM(long long &a, long long b) {
a += b;
if (a >= MOD) a -= MOD;
}
void mulM(long long &a, long long b) {
a = ((a%MOD)*(b%MOD))%MOD ;
}
bool compare_by_second(pair<int, int> a, pair<int, int> b) {
if(a.second != b.second){
return a.second < b.second;
}else{
return a.first < b.first;
}
}
ll dp[20][2][2];
int main() {
ll a,b ;cin >> a >> b;
if(a <= 5) pl(0)
else if(a <= 12) pl(b/2)
else pl(b)
}
