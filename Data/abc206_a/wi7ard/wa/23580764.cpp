#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define eb emplace_back
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define all(x) (x).begin(), (x).end()
#define endl "\n"
#define int long long int
#define mod(x) x%MOD
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; print(x); cerr << endl;
#else
#define debug(x)
#endif
template <class T> void pprint(vector <T> v) {
for(T i : v) {
cout << i << " ";
}
cout << endl;
}
void print(int t) {
cerr << t ;
}
void print(string t) {
cerr << t ;
}
void print(char t) {
cerr << t ;
}
void print(double t) {
cerr << t ;
}
template <class T, class V> void print(pair <T, V> p) {
cerr << "{";
print(p.ff);
cerr << ",";
print(p.ss);
cerr << "}" << endl;
}
template <class T> void print(vector <T> v) {
cerr << "[ ";
for(T i : v) {
print(i);
cerr << " ";
}
cerr << "]" << endl;
}
template <class T> void print(set <T> v) {
cerr << "[ ";
for(T i : v) {
print(i);
cerr << " ";
}
cerr << "]" << endl;
}
template <class T> void print(multiset <T> v) {
cerr << "[ ";
for(T i : v) {
print(i);
cerr << " ";
}
cerr << "]" << endl;
}
template <class T, class V> void print(map <T, V> v) {
cerr << "[ ";
for(auto i : v) {
print(i);
cerr << " ";
}
cerr << "]" << endl;
}
void solve() {
int n;
cin >> n;
if((int)(n * 1.08) < 206) {
cout << "Yay!" << endl;
} else {
cout << ":(" << endl;
}
}
int32_t main() {
fastio();
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
freopen("error.txt", "w", stderr);
#endif
solve();
}
