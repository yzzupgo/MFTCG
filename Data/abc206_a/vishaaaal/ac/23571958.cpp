#include<bits/stdc++.h>
#define fast_az_fuk ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define lll __int128
#define ull unsigned ll
#define ld long double
#define pb push_back
#define pf push_front
#define dll deque<ll>
#define vll vector<ll>
#define vvll vector<vll>
#define pll pair<ll,ll>
#define vpll vector<pll>
#define dpll deque<pll>
#define mapll map<ll,ll>
#define umapll umap<ll,ll>
#define endl "\n"
#define all(v) v.begin(),v.end()
#define ms(a,x) memset(a,x,sizeof(a))
#define random(l,r,T) uniform_int_distribution<T>(l,r)(rng)
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#ifdef LOCAL
#include <debug.h>
#endif
template<typename T> istream &operator >>(istream &in, vector<T> &v) {
for(auto &x : v) {
in >> x;
}
return in;
}
template<typename T> ostream &operator <<(ostream &out, const vector<T> &v) {
for(auto &x : v) {
out << x << ' ';
}
return out;
}
template<typename T1, typename T2> istream &operator >>(istream &in, pair<T1, T2> &p) {
in >> p.first >> p.second;
return in;
}
template<typename T1, typename T2> ostream &operator <<(ostream &out, const pair<T1, T2> &p) {
out << p.first << ' ' << p.second;
return out;
}
struct custom_hash {
static uint64_t splitmix64(uint64_t x) {
x += 0x9e3779b97f4a7c15;
x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
return x ^ (x >> 31);
}
size_t operator()(uint64_t x) const {
static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
return splitmix64(x + FIXED_RANDOM);
}
};
template<class T, class H>using umap = unordered_map<T, H, custom_hash>;
template<class T>using uset = unordered_set<T, custom_hash>;
int32_t main() {
#ifdef LOCAL
freopen("error.txt", "w", stderr);
#endif
fast_az_fuk
ll n;
cin >> n;
ld x = 1.08;
x *= n;
n = floor(x);
if(n <= 205) {
cout << "Yay!";
} else if(n == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
