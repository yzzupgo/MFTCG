#include <bits/stdc++.h>
using namespace std;
template <class T> ostream &operator << (ostream &os, const vector<T> &p) {
os << "[";
for(auto &it : p) {
os << it << " ";
}
return os << "]";
}
template <class S, class T> ostream &operator << (ostream &os, const pair<S, T> &p) {
return os << "(" << p.first << "," << p.second << ")";
}
#ifndef ONLINE_JUDGE
#define deb(...) dbs(#__VA_ARGS__,__VA_ARGS__)
template <class T> void dbs(string str, T t) {
cerr << str << ":" << t << "\n";
}
template<class T, class...S> void dbs(string str, T t, S... s) {
int idx = str.find(',');
cerr << str.substr(0, idx) << ":" << t << ",";
dbs(str.substr(idx + 1), s...);
}
#else
#define deb(...) {}
#endif
#define int long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define bep(i,n) for(int i=n-1;i>=0;i--)
#define w(t) int t; cin>>t; while(t--)
#define mod 1000000007
#define pb push_back
#define vi vector<int>
#define umi unordered_map<int,int>
#define mi map<int,int>
#define F first
#define S second
#define all(v) v.begin(),v.end()
template<class T> bool umin(T &a, T b) {
return a > b ? (a = b, true) : false;
}
template<class T> bool umax(T &a, T b) {
return a < b ? (a = b, true) : false;
}
void stugs() {
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
}
void solve() {
int n;
cin >> n;
if((int)(n * 1.08) > 206) {
cout << ":(";
} else if((int)(n * 1.08) == 206) {
cout << "50-50";
} else {
cout << "Yay!";
}
}
int32_t main() {
stugs();
solve();
return 0;
}
