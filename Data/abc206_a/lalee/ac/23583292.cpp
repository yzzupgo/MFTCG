#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define _1a1ee int t;cin>>t;for(int tt=0; tt<t; ++tt)
#define MOD 1000000007
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define br cout <<'\n';
#define sz(x) ((int)(x).size())
#define lcm(x,y) (x*y/__gcd(x,y))
#define PI 3.141592653589793238462
#define all(x) (x).begin(), (x).end()
#define f(i,k,n) for(long long int i=k; i<n; ++i)
#define fr(i,k,n) for(long long int i=k; i>=n; --i)
#define ni1(a) ll a;cin>>a;
#define ni2(a,b) ll a,b;cin>>a>>b
#define ni3(a,b,c) ll a,b,c;cin>>a>>b>>c
#define ni4(a,b,c,d) ll a,b,c,d;cin>>a>>b>>c>>d
#define ni5(a,b,c,d,e) ll a,b,c,d,e;cin>>a>>b>>c>>d>>e
#define ni6(a,b,c,d,e,f) ll a,b,c,d,e,f;cin>>a>>b>>c>>d>>e>>f
typedef long long int ll;
typedef unsigned long long ull;
typedef long double lld;
typedef vector<int> vi;
typedef vector<long long int> vll;
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
long long binpow(long long a, long long b, long long m) {
a %= m;
long long res = 1;
while(b > 0) {
if(b & 1) {
res = res * a % m;
}
a = a * a % m;
b >>= 1;
}
return res;
}
void solve() {
ni1(n);
ll ans = 1.08 * n;
if(ans < 206) {
cout << "Yay!";
} else if(ans == 206) {
cout << "so-so";
} else if(ans > 206) {
cout << ":(";
}
}
int main() {
#ifndef ONLINE_JUDGE
freopen("Error.txt", "w", stderr);
#endif
fast
clock_t start, end;
start = clock();
{
solve();
}
end = clock();
double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
#ifndef ONLINE_JUDGE
cerr << "Time: " << (time_taken * 1000) << "\n";
#endif
return 0;
}
