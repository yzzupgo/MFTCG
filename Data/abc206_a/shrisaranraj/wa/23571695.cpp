#include "bits/stdc++.h"
using namespace std;
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
void _print(ll t) {
cerr << t;
}
void _print(int t) {
cerr << t;
}
void _print(string t) {
cerr << t;
}
void _print(char t) {
cerr << t;
}
void _print(lld t) {
cerr << t;
}
void _print(double t) {
cerr << t;
}
void _print(ull t) {
cerr << t;
}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {
cerr << "{";
_print(p.first);
cerr << ",";
_print(p.second);
cerr << "}";
}
template <class T> void _print(vector <T> v) {
cerr << "[ ";
for(T i : v) {
_print(i);
cerr << " ";
}
cerr << "]";
}
template <class T> void _print(set <T> v) {
cerr << "[ ";
for(T i : v) {
_print(i);
cerr << " ";
}
cerr << "]";
}
template <class T> void _print(multiset <T> v) {
cerr << "[ ";
for(T i : v) {
_print(i);
cerr << " ";
}
cerr << "]";
}
template <class T, class V> void _print(map <T, V> v) {
cerr << "[ ";
for(auto i : v) {
_print(i);
cerr << " ";
}
cerr << "]";
}
#define int long long
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solve() {
double n;
cin >> n;
int ans = 1.08 * n;
if(ans < 206) {
cout << "Yay";
} else if(ans == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
int32_t main() {
fast;
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
freopen("Error.txt", "w", stderr);
#endif
int t = 1;
while(t--) {
solve();
}
return 0;
}
