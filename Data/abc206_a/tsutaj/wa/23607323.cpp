#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <cstring>
#include <deque>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <set>
#include <complex>
#include <cmath>
#include <limits>
#include <cfloat>
#include <climits>
#include <ctime>
#include <cassert>
#include <numeric>
#include <fstream>
#include <functional>
#include <bitset>
using namespace std;
using ll = long long int;
using int64 = long long int;
template<typename T> void chmax(T &a, T b) {
a = max(a, b);
}
template<typename T> void chmin(T &a, T b) {
a = min(a, b);
}
template<typename T> void chadd(T &a, T b) {
a = a + b;
}
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
const int INF = 1LL << 29;
const ll LONGINF = 1LL << 60;
const ll MOD = 1000000007LL;
int main() {
int N;
cin >> N;
if(N * 108 < 20600) {
cout << "Yay!" << endl;
} else if(N * 108 == 20600) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
