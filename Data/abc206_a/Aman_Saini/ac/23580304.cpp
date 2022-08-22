#include "bits/stdc++.h"
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma GCC optimize("unroll-loops")
#define int long long int
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(x) (x).begin(),(x).end()
#define rev(x) (x).rbegin(),(x).rend()
#define uniq(v) (v).erase(unique(all(v)),(v).end())
#define sz(x) (int)((x).size())
#define pii pair<int,int>
#define itp vector<pair<int,int> >:: iterator
#define mem1(a) memset(a,-1,sizeof(a))
#define mem0(a) memset(a,0,sizeof(a))
#define max3(a,b,c) max(max(a,b),c)
#define max4(a,b,c,d) max(max(a,b),max(c,d))
#define min3(a,b,c) min(min(a,b),c)
#define min4(a,b,c,d) min(min(a,b), min(c,d))
const int inf = 1000000000000000000;
const long double pi = 3.14159265358979323846264338;
const long long mod = 1000000007;
int modpow(int x, unsigned int y, int p) {
int res = 1;
x = x % p;
if(x == 0) {
return 0;
}
while(y > 0) {
if(y & 1) {
res = (res * x) % p;
}
y = y >> 1;
x = (x * x) % p;
}
return res;
}
int _pow(int a, int b) {
if(!b) {
return 1;
}
int temp = _pow(a, b / 2);
temp = (temp * temp);
if(b % 2) {
return (a * temp);
}
return temp;
}
int invmod(int a, int m) {
return modpow(a, m - 2, m);
}
int ceil(int a, int x) {
if(a % x == 0) {
return a / x;
}
return a / x + 1;
}
int fac(int n, int p) {
int ans = 1;
for(int i = 2; i <= n; i++) {
ans = (1LL * ans * i) % p;
}
return ans;
}
int gcd(int a, int b) {
if(b == 0) {
return a;
}
return gcd(b, a % b);
}
void solve() {
int n;
cin >> n;
long double x = 1.08 * n;
int res = (int) x;
if(res > 206) {
cout << ":(" << endl;
} else if(res == 206) {
cout << "so-so";
} else {
cout << "Yay!";
}
}
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int tests = 1;
while(tests--) {
solve();
}
return 0;
}
