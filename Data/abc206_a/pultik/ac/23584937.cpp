#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
void __print(int x) {
cerr << x;
}
void __print(long x) {
cerr << x;
}
void __print(long long x) {
cerr << x;
}
void __print(unsigned x) {
cerr << x;
}
void __print(unsigned long x) {
cerr << x;
}
void __print(unsigned long long x) {
cerr << x;
}
void __print(float x) {
cerr << x;
}
void __print(double x) {
cerr << x;
}
void __print(long double x) {
cerr << x;
}
void __print(char x) {
cerr << '\'' << x << '\'';
}
void __print(const char *x) {
cerr << '\"' << x << '\"';
}
void __print(const string &x) {
cerr << '\"' << x << '\"';
}
void __print(bool x) {
cerr << (x ? "true" : "false");
}
template<typename T, typename V>
void __print(const pair<T, V> &x) {
cerr << '{';
__print(x.first);
cerr << ',';
__print(x.second);
cerr << '}';
}
template<typename T>
void __print(const T &x) {
int f = 0;
cerr << '{';
for(auto &i : x) {
cerr << (f++ ? "," : ""), __print(i);
}
cerr << "}";
}
void _print() {
cerr << "]\n";
}
template <typename T, typename... V>
void _print(T t, V... v) {
__print(t);
if(sizeof...(v)) {
cerr << ", ";
}
_print(v...);
}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
const ll mod = 1e9 + 7;
const ll N = 1e5 + 8;
int main() {
ios_base :: sync_with_stdio(false);
cin.tie(NULL);
ll x;
cin >> x;
x *= 1.08;
debug(x);
if(x < 206) {
cout << "Yay!";
} else if(x > 206) {
cout << ":(";
} else {
cout << "so-so";
}
return 0;
}
