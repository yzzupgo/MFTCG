#include <bits/stdc++.h>
using namespace std;
using LL = int64_t;
using VL = vector<LL>;
using VVL = vector<VL>;
using VS = vector<string>;
using PLL = pair<LL, LL>;
#define whole(f,x,...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x)
#define rwhole(f,x,...) ([&](decltype((x)) whole) { return (f)(rbegin(whole), rend(whole), ## __VA_ARGS__); })(x)
#define EACH(i,c) for(decltype((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define ALL(x) ::std::begin(x), ::std::end(x)
#define RALL(x) ::std::rbegin(x), ::std::rend(x)
#define SORT(c) whole(sort, c)
#define RSORT(c) rwhole(sort, c)
constexpr double EPS = 1e-10;
constexpr double PI = 3.14159265358979323846;
constexpr int MOD = 1000000007;
VL dx = {0, 1, 0, -1};
VL dy = {1, 0, -1, 0};
VL dx2 = {-1, 0, 1, -1, 1, -1, 0, 1};
VL dy2 = {-1, -1, -1, 0, 0, 1, 1, 1};
#define dump(x) cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
struct InitIO {
InitIO() {
cin.tie(nullptr);
ios_base::sync_with_stdio(false);
cout << fixed << setprecision(30);
}
} init_io;
template<typename T> istream& operator >>(istream& is, vector<T>& vec);
template<typename T1, typename T2> ostream& operator <<(ostream& os, const pair<T1, T2>& p);
template<typename T> ostream& operator <<(ostream& os, const vector<T>& vec);
template<typename T> ostream& operator <<(ostream& os, const vector<vector<T>>& vv);
template<typename T> vector<T> make_v(size_t a);
template<typename T,typename... Ts> auto make_v(size_t a,Ts... ts);
template<typename T,typename V> typename enable_if<is_class<T>::value==0>::type fill_v(T &t,const V &v);
template<typename T,typename V> typename enable_if<is_class<T>::value!=0>::type fill_v(T &t,const V &v);
template<typename T>
istream& operator >>(istream& is, vector<T>& vec) {
for(T& x: vec) is >> x;
return is;
}
template<typename T1, typename T2>
ostream& operator <<(ostream& os, const pair<T1, T2>& p) {
os << p.first << "," << p.second;
return os;
}
template<typename T>
ostream& operator <<(ostream& os, const vector<T>& vec) {
for(int i=0; i<vec.size(); i++){
os << vec[i] << ( i+1 == vec.size() ? "" : "\t" );
}
return os;
}
template<typename T>
ostream& operator <<(ostream& s, const vector<vector<T>>& vv) {
for (int i = 0; i < vv.size(); ++i) {
s << vv[i] << endl;
}
return s;
}
template<typename T>
vector<T> make_v(size_t a){return vector<T>(a);}
template<typename T,typename... Ts>
auto make_v(size_t a,Ts... ts){
return vector<decltype(make_v<T>(ts...))>(a,make_v<T>(ts...));
}
template<typename T,typename V>
typename enable_if<is_class<T>::value==0>::type
fill_v(T &t,const V &v){t=v;}
template<typename T,typename V>
typename enable_if<is_class<T>::value!=0>::type
fill_v(T &t,const V &v){
for(auto &e:t) fill_v(e,v);
}
template<class T,class U> void chmax(T&a,U b){if(a<b)a=b;}
template<class T,class U> void chmin(T&a,U b){if(b<a)a=b;}
template<typename T> T gcd(T a, T b) { return b?gcd(b,a%b):a;}
template<typename T> T lcm(T a, T b) { return a/gcd(a,b)*b;}
int main(int argc, char *argv[])
{
int x,y;
cin >> x >> y;
for (int i = 0; i <= x; i++) {
if (i*2 + (x-i)*4 == y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
