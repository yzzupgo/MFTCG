#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define ff first
#define ss second
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define pb push_back
#define mkp make_pair
#define all(v) (v).begin(),(v).end()
#define pii pair<int, int>
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define rev(x) reverse(all(x))
#define gcd(m,n) __gcd(m, n)
#define negmod(x,m) ((x)%(m)+(m))%(m)
#define fr(i,a,b) for (int i = (a), _b = (b); i <= _b; i++)
#define rep(i,n) for (int i = 0, _n = (n); i < _n; i++)
#define repr(i,n) for (int i = n - 1; i >= 0; i--)
#define frr(i,a,b) for (int i = (a), _b = (b); i >= _b; i--)
#define M 1000000007
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
ull countBits(ull n) {
ull count = 0;
while(n) {
count++;
n >>= 1;
}
return count;
}
int updiv(int a, int b) {
if(a % b == 0) {
return (a / b);
} else {
return (a / b) + 1;
}
}
void load() {
fast
#ifndef ONLINE_JUDGE
if(fopen("input.txt", "r")) {
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
}
#endif
}
int mymod(int x, int m) {
if(x > 0) {
return x % m;
} else {
return negmod(x, m);
}
}
int binpow(int a, int b) {
int res = 1;
while(b > 0) {
if(b & 1) {
res = res * a;
}
a = a * a;
b >>= 1;
}
return res;
}
bool second_sort(const pii &lhs, const pii &rhs) {
pii a, b;
a.ff = lhs.ss;
a.ss = lhs.ff;
b.ff = rhs.ss;
b.ss = rhs.ff;
return a < b;
}
int32_t main() {
load();
int t = 1, n;
while(t--) {
cin >> n;
int n = floor(1.08 * n);
if(n < 206) {
cout << "Yay!";
} else if(n == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
return 0;
}
