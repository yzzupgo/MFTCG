#include <bits/stdc++.h>
using namespace std;
#define INIT std::ios::sync_with_stdio(false);std::cin.tie(0);
#define VAR(type,...) type __VA_ARGS__;MACRO_VAR_Scan(__VA_ARGS__);
template<typename T> void MACRO_VAR_Scan(T& t) { std::cin >> t; }
template<typename First, typename...Rest>void MACRO_VAR_Scan(First& first, Rest& ...rest) { std::cin >> first; MACRO_VAR_Scan(rest...); }
#define VEC_ROW(type,n,...) std::vector<type> __VA_ARGS__;MACRO_VEC_ROW_Init(n, __VA_ARGS__); for(int w_=0; w_<n; ++w_){MACRO_VEC_ROW_Scan(w_, __VA_ARGS__);}
template<typename T> void MACRO_VEC_ROW_Init(int n, T& t) { t.resize(n); }
template<typename First, typename...Rest>void MACRO_VEC_ROW_Init(int n, First& first, Rest& ...rest) { first.resize(n); MACRO_VEC_ROW_Init(n, rest...); }
template<typename T> void MACRO_VEC_ROW_Scan(int p, T& t) { std::cin >> t[p]; }
template<typename First, typename...Rest>void MACRO_VEC_ROW_Scan(int p, First& first, Rest& ...rest) { std::cin >> first[p]; MACRO_VEC_ROW_Scan(p, rest...); }
#define VEC(type,c,n) std::vector<type> c(n);for(auto& i:c)std::cin>>i;
#define MAT(type,c,m,n) std::vector<std::vector<type>> c(m, std::vector<type>(n));for(auto& R:c)for(auto& w:R)std::cin>>w;
template<typename T>void MACRO_OUT(const T t) { std::cout << t; }
template<typename First, typename...Rest>void MACRO_OUT(const First first, const Rest...rest) { std::cout << first << " "; MACRO_OUT(rest...); }
#define OUT(...) MACRO_OUT(__VA_ARGS__);
#define FOUT(n,dist) std::cout<<std::fixed<<std::setprecision(n)<<(dist);
#define SOUT(n,c,dist) std::cout<<std::setw(n)<<std::setfill(c)<<(dist);
#define EOUT(...) { OUT(__VA_ARGS__)BR; exit(0); }
#define SP std::cout<<" ";
#define TAB std::cout<<"\t";
#define BR std::cout<<"\n";
#define SPBR(w,n) std::cout<<(w + 1 == n ? '\n' : ' ');
#define ENDL std::cout<<std::endl;
#define FLUSH std::cout<<std::flush;
#define SHOW(dist) {std::cerr << #dist << "\t: " << (dist) << "\n";}
#define SHOWVECTOR(v) {std::cerr << #v << "\t: ";for(const auto& xxx : v){std::cerr << xxx << " ";}std::cerr << "\n";}
#define SHOWVECTOR2(v) {std::cerr << #v << "\t:\n";for(const auto& xxx : v){for(const auto& yyy : xxx){std::cerr << yyy << " ";}std::cerr << "\n";}}
#define SHOWQUEUE(a) {auto tmp(a);std::cerr << #a << "\t: ";while(!tmp.empty()){std::cerr << tmp.front() << " ";tmp.pop();}std::cerr << "\n";}
#define SHOWSTACK(a) {auto tmp(a);std::cerr << #a << "\t: ";while(!tmp.empty()){std::cerr << tmp.top() << " ";tmp.pop();}std::cerr << "\n";}
#define cYES cout<<"YES"<<endl
#define cNO cout<<"NO"<<endl
#define cYes cout<<"Yes"<<endl
#define cNo cout<<"No"<<endl
#define ALL(a) (a).begin(),(a).end()
#define FOR(w,a,n) for(int w=(a);w<(n);++w)
#define RFOR(w,a,n) for(int w=(n)-1;w>=(a);--w)
#define REP(w,n) for(int w=0;w<int(n);++w)
#define RREP(w,n) for(int w=int(n)-1;w>=0;--w)
#define IN(a,x,b) (a<=x && x<b)
template<class T> inline T CHMAX(T & a, const T b) { return a = (a < b) ? b : a; }
template<class T> inline T CHMIN(T& a, const T b) { return a = (a > b) ? b : a; }
template<class T> using V = std::vector<T>;
template<class T> using VV = V<V<T>>;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using PAIR = std::pair<int, int>;
using PAIRLL = std::pair<ll, ll>;
constexpr int INFINT = (1 << 30) - 1;
constexpr int INFINT_LIM = (1LL << 31) - 1;
constexpr ll INFLL = 1LL << 60;
constexpr ll INFLL_LIM = (1LL << 62) - 1 + (1LL << 62);
constexpr double eps = 1e-7;
constexpr int MOD = 1000000007;
constexpr double PI = 3.141592653589793238462643383279;
template<class T, size_t N> void FILL(T(&a)[N], const T & val) { for (auto& x : a) x = val; }
template<class ARY, size_t N, size_t M, class T> void FILL(ARY(&a)[N][M], const T & val) { for (auto& b : a) FILL(b, val); }
template<class T> void FILL(std::vector<T> & a, const T & val) { for (auto& x : a) x = val; }
template<class ARY, class T> void FILL(std::vector<std::vector<ARY>> & a, const T & val) { for (auto& b : a) FILL(b, val); }
int main() {
INIT;
VAR(int,x,y)
REP(c,x){
int t = x -c;
int asi = c * 2 + t * 4;
if(asi == y){
OUT("Yes")
return 0;
}
}
OUT("No")
return 0;
}
