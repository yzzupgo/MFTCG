#ifdef lolipop
#define _GLIBCXX_DEBUG
#endif
#include <iostream>
#include <cstddef>
#include <vector>
#include <cstring>
#include <string>
#include <algorithm>
#include <set>
#include <map>
#include <ctime>
#include <unordered_map>
#include <random>
#include <iomanip>
#include <cmath>
#include <queue>
#include <unordered_set>
#include <cassert>
#include <bitset>
#include <deque>
#include <utility>
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define ld double
using namespace std;
mt19937 rnd(time(nullptr));
inline void fastio() {
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
}
void solve() {
int n;
cin >> n;
if(n == 191) {
cout << "so-so\n";
return;
}
if(n <= 190) {
cout << "Yay!\n";
} else {
cout << ":(\n";
}
}
signed main() {
#ifdef lolipop
freopen("input.txt", "r", stdin);
#else
fastio();
#endif
int T = 1;
while(T--) {
solve();
}
return 0;
}
