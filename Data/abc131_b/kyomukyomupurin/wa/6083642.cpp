#include <iostream>
#include <fstream>
#include <sstream>
#include <array>
#include <deque>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <algorithm>
#include <cmath>
#include <complex>
#include <numeric>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cstring>
#include <chrono>
#include <iomanip>
#include <random>
#include <utility>
using namespace std;
using int64 = int64_t;
using pii = pair<int, int>;
using pll = pair<int64_t, int64_t>;
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define print(x) cout << (x) << '\n'
#define debug(x) cout << #x << ": " << (x) << '\n'
template<typename T> inline void chmin(T &a, T b) {if (a > b) a = b; return;}
template<typename T> inline void chmax(T &a, T b) {if (a < b) a = b; return;}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int n, l; cin >> n >> l;
int ans = 0;
for (int i = 2; i <= n; ++i) {
ans += l + i - 1;
}
print(ans);
return 0;
}
