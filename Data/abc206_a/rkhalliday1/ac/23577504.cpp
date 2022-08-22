#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define endl "\n"
#define pb push_back
#define mkp make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define fore(i,s,e) for(int i=s; i<e; i++)
#define forr(i,e,s) for(int i=e; i>=s; i--)
#define db(x) cerr << #x<<" "; _print(x); cerr << endl;
#define fastio ios_base::sync_with_stdio(false);
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef map<int, int> mpii;
void _print(int t) {
cerr << t;
}
void _print(string t) {
cerr << t;
}
void _print(char t) {
cerr << t;
}
void _print(double t) {
cerr << t;
}
void _print(bool t) {
cerr << t;
}
template <class T, class V> void _print(pair <T, V> p) {
cerr << "{ ";
_print(p.ff);
cerr << ", ";
_print(p.ss);
cerr << " }\n";
}
template <class T> void _print(vector <T> v) {
cerr << "[ ";
for(T i : v) {
_print(i);
cerr << " ";
}
cerr << "]\n";
}
template <class T> void _print(set <T> v) {
cerr << "[ ";
for(T i : v) {
_print(i);
cerr << " ";
}
cerr << "]";
}
template <class T, class V> void _print(unordered_map<T, V> v) {
cerr << "[";
for(auto i : v) {
_print(i);
cerr << " ";
}
cerr << "]\n";
}
template <class T, class V> void _print(map <T, V> v) {
cerr << "[ ";
for(auto i : v) {
_print(i);
cerr << " ";
}
cerr << "]\n";
}
int gcd(int a, int b) {
if(b > a) {
return gcd(b, a);
}
if(b == 0) {
return a;
}
return gcd(b, a % b);
}
int expo(int a, int b, int MOD) {
int res = 1;
while(b > 0) {
if(b & 1) {
res = (res * a) % MOD;
}
a = (a * a) % MOD;
b = b >> 1;
}
return res;
}
void swap(int &x, int &y) {
int temp = x;
x = y;
y = temp;
}
vi sieve(int n) {
int *arr = new int[n + 1]();
vi vect;
for(int i = 2; i <= n; i++)if(arr[i] == 0) {
vect.pb(i);
for(int j = i * i; j <= n; j += i) {
arr[j] = 1;
}
}
return vect;
}
void solve() {
int n;
cin >> n;
if((int)(1.08 * n) < 206) {
cout << "Yay!" << endl;
} else if((int)(1.08 * n) == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
int32_t main() {
fastio;
#ifndef ONLINE_JUDGE
freopen("debug.txt", "w", stderr);
freopen("in.txt", "r", stdin);
freopen("out.txt", "w", stdout);
#endif
solve();
return 0;
}
