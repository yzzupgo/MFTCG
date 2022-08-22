#define _CRT_SECURE_NO_DEPRECATE
#define _SECURE_SCL 0
#pragma comment(linker, "/STACK:200000000")
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define mset(mas,val) memset(mas,val,sizeof(mas))
#define sz(a) (int)(a).size()
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define forn(i,n) for (int i=0; i<int(n); ++i)
#define fornd(i,n) for (int i=int(n)-1; i>=0; --i)
#define forab(i,a,b) for (int i=int(a); i<int(b); ++i)
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
const int INF = (int) 1e9;
const long long INF64 = (long long) 1e18;
long double eps = 1e-6;
const long double pi = 3.14159265358979323846;
const int N = 1e6 + 100;
long long fact[N], modulo = INF + 7;
long long binpow(long long val, long long deg, long long mod) {
if(!deg) {
return 1 % mod;
}
if(deg & 1) {
return binpow(val, deg - 1, mod) * val % mod;
}
long long res = binpow(val, deg >> 1, mod);
return (res * res) % mod;
}
const int maxn = 2e5 + 5;
vector<int> g[maxn];
int cc = 0;
bool vis[maxn];
int dfs(int cur) {
vis[cur] = true;
int sz = 1;
for(auto child : g[cur]) {
if(!vis[child]) {
sz += dfs(child);
}
}
return sz;
}
void solve() {
int n;
cin >> n;
double a = n * 1.08;
int ans = (int)a;
if(ans < 206) {
cout << "Yay!" << endl;
} else if(ans == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int tc = 1;
while(tc--) {
solve();
}
}
