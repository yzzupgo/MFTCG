#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
#include<stdio.h>
#include<vector>
#include<queue>
#include<math.h>
#include<deque>
using namespace std;
#define int long long
#define rep(s,i,n) for(int i=s;i<n;i++)
#define c(n) cout<<n<<endl;
#define ic(n) int n;cin>>n;
#define sc(s) string s;cin>>s;
#define mod 1000000007
#define inf 1000000000000000007
#define f first
#define s second
#define mini(c,a,b) *min_element(c+a,c+b)
#define maxi(c,a,b) *max_element(c+a,c+b)
#define pi 3.141592653589793238462643383279
#define e_ 2.718281828459045235360287471352
#define P pair<int,int>
#define upp(a,n,x) upper_bound(a,a+n,x)-a;
#define low(a,n,x) lower_bound(a,a+n,x)-a;
#define UF UnionFind
int keta(int x) {
rep(0, i, 30) {
if (x < 10) {
return i + 1;
}
x = x / 10;
}
}
int gcd(int x, int y) {
if (x == 0 || y == 0)return x + y;
int aa = x, bb = y;
rep(0, i, 1000) {
aa = aa % bb;
if (aa == 0) {
return bb;
}
bb = bb % aa;
if (bb == 0) {
return aa;
}
}
}
int lcm(int x, int y) {
int aa = x, bb = y;
rep(0, i, 1000) {
aa = aa % bb;
if (aa == 0) {
return x / bb * y;
}
bb = bb % aa;
if (bb == 0) {
return x / aa * y;
}
}
}
bool p(int x) {
if (x == 1)return false;
rep(2, i, sqrt(x) + 1) {
if (x % i == 0 && x != i) {
return false;
}
}
return true;
}
int max(int a, int b) {
if (a >= b)return a;
else return b;
}
string maxst(string s, string t) {
int n = s.size();
int m = t.size();
if (n > m)return s;
else if (n < m)return t;
else {
rep(0, i, n) {
if (s[i] > t[i])return s;
if (s[i] < t[i])return t;
}
return s;
}
}
int min(int a, int b) {
if (a >= b)return b;
else return a;
}
int n2[61];
int nis[61];
int nia[61];
int mody[61];
int nn;
int com(int n, int y) {
int ni = 1;
for (int i = 0;i < 41;i++) {
n2[i] = ni;
ni *= 2;
}
int bunsi = 1, bunbo = 1;
rep(0, i, y)bunsi = (bunsi * (n - i)) % mod;
rep(0, i, y)bunbo = (bunbo * (i + 1)) % mod;
mody[0] = bunbo;
rep(1, i, 41) {
bunbo = (bunbo * bunbo) % mod;
mody[i] = bunbo;
}
rep(0, i, 41)nis[i] = 0;
nn = mod - 2;
for (int i = 40;i >= 0;i -= 1) {
if (nn > n2[i]) {
nis[i]++;
nn -= n2[i];
}
}
nis[0]++;
rep(0, i, 41) {
if (nis[i] == 1) {
bunsi = (bunsi * mody[i]) % mod;
}
}
return bunsi;
}
int gyakugen(int n, int y) {
int ni = 1;
for (int i = 0;i < 41;i++) {
n2[i] = ni;
ni *= 2;
}
mody[0] = y;
rep(1, i, 41) {
y = (y * y) % mod;
mody[i] = y;
}
rep(0, i, 41)nis[i] = 0;
nn = mod - 2;
for (int i = 40;i >= 0;i -= 1) {
if (nn > n2[i]) {
nis[i]++;
nn -= n2[i];
}
}
nis[0]++;
rep(0, i, 41) {
if (nis[i] == 1) {
n = (n * mody[i]) % mod;
}
}
return n;
}
int yakuwa(int n) {
int sum = 0;
rep(1, i, sqrt(n + 1)) {
if (n % i == 0)sum += i + n / i;
if (i * i == n)sum -= i;
}
return sum;
}
int poow(int y, int n) {
if (n == 0)return 1;
n -= 1;
int ni = 1;
for (int i = 0;i < 61;i++) {
n2[i] = ni;
ni *= 2;
}
int yy = y;
mody[0] = yy;
rep(1, i, 61) {
yy = (yy * yy) % mod;
mody[i] = yy;
}
rep(0, i, 61)nis[i] = 0;
nn = n;
for (int i = 60;i >= 0;i -= 1) {
if (nn >= n2[i]) {
nis[i]++;
nn -= n2[i];
}
}
rep(0, i, 61) {
if (nis[i] == 1) {
y = (y * mody[i]) % mod;
}
}
return y;
}
int minpow(int x, int y) {
int sum = 1;
rep(0, i, y)sum *= x;
return sum;
}
int ketawa(int x, int sinsuu) {
int sum = 0;
rep(0, i, 100)sum += (x % poow(sinsuu, i + 1)) / (poow(sinsuu, i));
return sum;
}
int sankaku(int a) {
return a * (a + 1) / 2;
}
int sames(int a[1111111], int n) {
int ans = 0;
rep(0, i, n) {
if (a[i] == a[i + 1]) {
int j = i;
while (a[j + 1] == a[i] && j <= n - 2)j++;
ans += sankaku(j - i);
i = j;
}
}
return ans;
}
using Graph = vector<vector<int>>;
int oya[114514];
int depth[114514];
void dfs(const Graph& G, int v, int p, int d) {
depth[v] = d;
oya[v] = p;
for (auto nv : G[v]) {
if (nv == p) continue;
dfs(G, nv, v, d + 1);
}
}
int XOR(int a, int b) {
if (a == 0 || b == 0) {
return a + b;
}
int ni = 1;
rep(0, i, 41) {
n2[i] = ni;
ni *= 2;
}
rep(0, i, 41)nis[i] = 0;
for (int i = 40;i >= 0;i -= 1) {
if (a >= n2[i]) {
nis[i]++;
a -= n2[i];
}
if (b >= n2[i]) {
nis[i]++;
b -= n2[i];
}
}
int sum = 0;
rep(0, i, 41)sum += (nis[i] % 2 * n2[i]);
return sum;
}
int string_int(string s){
int sum=0;
int n=s.size();
int t=1;
rep(0,i,n){
sum+=t*(s[n-i-1]-'0');
t*=10;
}
return sum;
}
struct UnionFind {
vector<int> par;
UnionFind(int N) : par(N) {
for (int i = 0; i < N; i++) par[i] = i;
}
int root(int x) {
if (par[x] == x) return x;
return par[x] = root(par[x]);
}
void unite(int x, int y) {
int rx = root(x);
int ry = root(y);
if (rx == ry) return;
par[rx] = ry;
}
bool same(int x, int y) {
int rx = root(x);
int ry = root(y);
return rx == ry;
}
};
signed main(){
ic(a) ic(b)
if(a>=13)c(b)
else if(a>=6)c(b/2)
else c(0)
}
