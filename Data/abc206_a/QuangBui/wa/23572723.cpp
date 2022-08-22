#include "bits/stdc++.h"
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define sz(x) (int)(x).size()
#define emb emplace_back
#define pub push_back
#define pob pop_back
typedef long long ll;
typedef long double ld;
using namespace std;
template<typename T_vector> void vecin(T_vector &v, int size = -1, int start = -1, int end = -1) {
if(size < 0) {
size = int(v.size());
} else {
v.resize(size);
}
assert(size > 0);
if(end < 0) {
end = size;
}
if(start < 0) {
start = 0;
}
assert(end <= size);
assert(start <= end);
for(int i = start; i < end; ++i) {
cin >> v[i];
}
}
template<typename T_vector> void vecout(const T_vector &v, int add_in = 0, int start = -1, int end = -1) {
if(start < 0) {
start = 0;
}
if(end < 0) {
end = int(v.size());
}
for(int i = start; i < end; ++i) {
cout << v[i] + add_in << " \n"[i == end - 1];
}
}
void dbg_out() {
cerr << endl;
}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
cerr << ' ' << H;
dbg_out(T...);
}
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif
void solve_problem() {
int n;
cin >> n;
double cost = n * 1.08;
if(ceil(cost) < 204) {
cout << "Yay!";
} else if(ceil(cost) == 204) {
cout << "so-so";
} else {
cout << ":(";
}
}
int32_t main() {
int T = 1;
for(int tc = 0; tc < T; ++tc) {
solve_problem();
}
}
