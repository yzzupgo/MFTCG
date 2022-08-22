#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
#include <cmath>
#include <iomanip>
#include <map>
#include <set>
using namespace std;
#define loop(i,N) for(ll (i)=0; (i)<(N);++(i))
struct _OMAZINAI_ { _OMAZINAI_() { std::ios::sync_with_stdio(false); std::cin.tie(0); } } __omazinai_instance__;
#define INF ((1LL<<61) + (1<<29))
#define YesNo(x) {std::cout << ((x)?"Yes":"No") << std::endl;}
#define YESNO(x) {std::cout << ((x)?"YES":"NO") << std::endl;}
#define OddEven(x) {std::cout << ((x)%2?"Odd":"Even") << std::endl;}
#define ODDEVEN(x) {std::cout << ((x)%2?"ODD":"EVEN") << std::endl;}
typedef long long int ll;
ll my_gcd(ll a, ll b) { return b ? my_gcd(b, a%b) : a; };
void _INPUT_IMPL_() {};
template <class T, class... Args> void _INPUT_IMPL_(T& dest, Args&... args) { cin >> dest; _INPUT_IMPL_(args...); }
void _OUTPUT_IMPL_() {};
template <class T, class... Args> void _OUTPUT_IMPL_(T dest, Args... args) { cout<< dest << (sizeof...(Args)?" ":""); _OUTPUT_IMPL_(args...); }
#define in(type,...) type __VA_ARGS__; _INPUT_IMPL_(__VA_ARGS__)
#define in_v(type,name,cnt) vector<type> name(cnt); loop(i, cnt) cin >> name[i];
#define sort_v(v) std::sort(v.begin(), v.end())
#define out(...) (_OUTPUT_IMPL_(__VA_ARGS__), std::cout<<std::endl)
#define set_fix(x) ((std::cerr<<std::fixed<<std::setprecision(x)),(std::cout<<std::fixed<<std::setprecision(x)))
#define space_op(x,y,a,b,c) ([](auto x_, auto y_, auto a_, auto b_, auto c_){if(x_<y_)return a_;if(x_>y_)return c_;return b_;}(x,y,a,b,c))
#define space_out(x,y,a,b,c) out(space_op(x, y, a, b, c))
bool odd(int n){
if(n < 10) return true;
if(n < 100) return false;
if(n < 1000) return true;
if(n < 10000) return false;
return true;
}
int main() {
in(int, N);
ll ans = 0;
loop(i, N)
if(odd(i+1))
++ans;
out(ans);
}
