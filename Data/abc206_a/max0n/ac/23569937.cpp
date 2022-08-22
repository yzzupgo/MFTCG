#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
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
cerr << '[';
for(auto &i : x) {
cerr << (f++ ? "," : ""), __print(i);
}
cerr << "]";
}
void _print() {
cerr << "\n";
}
template <typename T, typename... V>
void _print(T t, V... v) {
__print(t);
if(sizeof...(v)) {
cerr << ", ";
}
_print(v...);
}
#define debug(x...) cerr << #x << " : "; _print(x)
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int n;
cin >> n;
int val = 1.08 * n;
if(val < 206) {
cout << "Yay!" << nl;
} else if(val == 206) {
cout << "so-so" << nl;
} else {
cout << ":(" << nl;
}
return 0;
}
