#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define PI 3.141592653L
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const ll INF = (ll)1e18;
const int N = 2e5 + 5;
const ll MOD = 998244353;
int parent[N];
int gcd(int a, int b) {
if (a == 0)
return b;
return gcd(b%a, a);
}
int lcm(int a, int b) {
return (a*b)/gcd(a,b);
}
ll pow(ll x, ll y, ll p) {
if(y == 0) return 1;
ll res = 1;
x %= p;
if(x == 0) return 0LL;
while(y > 0) {
if(y & 1) res = (res*x) % p;
y >>= 1;
x = (x*x) % p;
}
return res;
}
int find(int x) {
return x == parent[x] ? x : parent[x] = find(parent[x]);
}
void Union(int x, int y) {
int xPar = find(x), yPar = find(y);
if(xPar != yPar) parent[xPar] = yPar;
}
int main()
{
IOS
int x, y;
cin >> x >> y;
string res = "No";
for(int c=1;c<=x;c++) {
int t = x - c;
if(2*c + 4*t == y) res = "Yes";
}
cout << res << endl;
return 0;
}
