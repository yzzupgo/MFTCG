#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define sym(s) s = "#" + s + "#";
#define INF 1e18
#define newl cout<<"\n";
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define alll(x,n) x+1, x+n+1
#define foo(i,a,n) for(ll i = (a); i <= n; i++)
#define deb1(a) cout<<a<<"\n";
#define deb2(a,b) cout<<a<<" "<<b<<"\n";
#define deb3(a,b,c) cout<<a<<" "<<b<<" "<<c<<"\n";
#define deb4(a,b,c,d) cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";
#define debp(a) cout<<a.ff<<" "<<a.ss<<"\n";
#define debv(a) for(auto it: a)cout<<it<<" ";newl;
#define debm(a) for(auto it: a)cout<<"{"<<it.ff<<","<<it.ss<<"}, ";newl;
#define deb1d(a,n) foo(i,1,n)cout<<a[i]<<" ";newl;
#define deb2d(a,n,m) foo(i,1,n){foo(j,1,m){cout<<a[i][j]<<" ";}newl;}
const int N = (int)2e+5 + 8;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
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
void _print(ld t) {
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
_print(p.ff);
cerr << ",";
_print(p.ss);
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
void MAIN(ll tc) {
#ifndef ONLINE_JUDGE
freopen("Error.txt", "w", stderr);
#endif
int n;
cin >> n;
if(206 == floorl(1.08 * 1.0l * n)) {
cout << "so-so";
} else if(206 > floorl(1.08 * 1.0l * n)) {
cout << ":(";
} else {
cout << "Yay!";
}
}
int main() {
fastio();
cout << fixed;
cout << setprecision(10);
int test__cases = 1;
for(int i = 1; i <= test__cases; i++) {
MAIN(i);
}
}
