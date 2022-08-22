#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <iomanip>
#include <utility>
#include <tuple>
#include <functional>
#include <bitset>
#include <cassert>
#include <complex>
#include <stdio.h>
#include <time.h>
#include <numeric>
#include <random>
#include <unordered_map>
#include <unordered_set>
#define ll long long
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define INF (1e9)
#define LINF (1e12)
#define mp make_pair
#define ALL(x) x.begin(),x.end()
using namespace std;
using P = pair<int, int>;
template <typename _Ty>
ostream& operator << (ostream& ostr, const vector<_Ty>& v) { if (v.empty()) { ostr << "{ }"; return ostr; } ostr << "{" << v.front(); for (auto itr = ++v.begin(); itr != v.end(); itr++) { ostr << ", " << *itr; } ostr << "}"; return ostr; }
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
void debug_out() { cout << endl; }
template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) { cout << H << " "; debug_out(T...); }
#ifdef _DEBUG
#define debug(...) debug_out(__VA_ARGS__)
#else
#define debug(...)
#endif
signed main() {
ios::sync_with_stdio(false);
std::cin.tie(nullptr);
int hiki, asi;
cin >> hiki >> asi;
rep(h1, hiki+1) {
rep(h2, hiki+1) {
if(h1 + h2 == hiki and 2*h1 + 4*h2 == asi or 2*h2 + 4*h1 == asi) {
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
}
