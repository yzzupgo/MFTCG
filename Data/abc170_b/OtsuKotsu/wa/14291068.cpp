#include <bits/stdc++.h>
#define debug(x) cout <<"DEBUG"<<" "<< #x << ":" << x << '\n'
#define rep(i,n) for(int_fast32_t i = 0; i < ((int_fast32_t)(n)); i++)
#define rep1(i,n) for(int_fast32_t i = 1; i <= ((int_fast32_t)(n)); i++)
#define rrep(i,n) for(int_fast32_t i = ((int_fast32_t)(n)-1); i >= 0; i--)
#define rrep1(i,n) for(int_fast32_t i = ((int_fast32_t)(n)); i >= 1; i--)
#define all(x) (x).begin(),(x).end()
using namespace std;
template<typename T>
using vec = vector<T>;
using i32 = int_fast32_t;
using i64 = int_fast64_t;
using u32 = uint_fast32_t;
using u64 = uint_fast64_t;
using ll = long long;
using ld = long double;
using vi = vec<int_fast32_t>;
using vl = vec<int_fast64_t>;
using vld = vec<ld>;
using vii = vec<vi>;
using PII = pair<int_fast32_t, int_fast32_t>;
template<class T>
using maxheap = std::priority_queue<T>;
template<class T>
using minheap = std::priority_queue<T, std::vector<T>, std::greater<T>>;
template<class T,class U> inline bool chmax(T &a, const U &b){if(a<b){a=b;return 1;}return 0;}
template<class T,class U> inline bool chmin(T &a, const U &b){if(a>b){a=b;return 1;}return 0;}
const ld Pi = std::acos(-1.0L);
constexpr ll infll = (1LL<<62)-1;
constexpr int inf = (1<<30)-1;
const int mod = 1000000007;
signed main(){
int START_TIME = clock();
cin.tie(nullptr);
ios::sync_with_stdio(false);
string s,t;
i32 n,m;
cin >> n >> m;
rep(i, n) {
if(i*4 + (n-i)*2 == m) {
cout << "YES" << '\n';
return 0;
}
}
cout << "NO" << '\n';
}
