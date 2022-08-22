#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ull = unsigned long long int;
using P = pair<ll, ll>;
using P3 = pair<int, P>;
using PP = pair<P, P>;
constexpr int INF32 = 1 << 30;
constexpr ll INF64 = 1LL << 60;
constexpr ll MOD = 1000000007;
constexpr int di[] = {0, 1, 0, -1};
constexpr int dj[] = {1, 0, -1, 0};
constexpr int di8[] = {0, 1, 1, 1, 0, -1, -1, -1};
constexpr int dj8[] = {1, 1, 0, -1, -1, -1, 0, 1};
constexpr double EPS = 1e-10;
const double PI = acos(-1);
#define ALL(v) (v).begin(),(v).end()
#define REP(i,n) for(int i=0,i_len=n; i<i_len; ++i)
template<typename T1, typename T2> bool chmax(T1 &a, T2 b) {
if(a < b) {
a = b;
return 1;
}
return 0;
}
template<typename T1, typename T2> bool chmin(T1 &a, T2 b) {
if(b < a) {
a = b;
return 1;
}
return 0;
}
int main() {
int n;
cin >> n;
int y = n * 108 / 100;
if(y < 206) {
cout << "Yay!" << endl;
} else if(y == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
