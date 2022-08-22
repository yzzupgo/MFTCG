#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
#include<stdio.h>
#include<vector>
#include<queue>
#include<math.h>
#include<deque>
#include<set>
#include<bitset>
using namespace std;
#define double long double
#define int long long
#define rep(s,i,n) for(int i=s;i<n;i++)
#define c(n) cout<<n<<endl;
#define ic(n) int n;cin>>n;
#define sc(s) string s;cin>>s;
#define dc(d) double d;cin>>d;
#define mod 100000007
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
int integer(double d){
return long(d);
}
int distance(double a,double b,double c,double d){
return sqrt((b-a)*(b-a)+(c-d)*(c-d));
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
int n2[41];
int nis[41];
int nia[41];
int mody[41];
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
int newcom(int n,int y){
int bunsi = 1, bunbo = 1;
rep(0, i, y){
bunsi = (bunsi * (n - i)) ;
bunbo = (bunbo * (i + 1)) ;
int k=gcd(bunsi,bunbo);
bunsi/=k;
bunbo/=k;
}
return bunsi/bunbo;
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
for (int i = 0;i < 41;i++) {
n2[i] = ni;
ni *= 2;
}
int yy = y;
mody[0] = yy;
rep(1, i, 41) {
yy = (yy * yy) % mod;
mody[i] = yy;
}
rep(0, i, 41)nis[i] = 0;
nn = n;
for (int i = 40;i >= 0;i -= 1) {
if (nn >= n2[i]) {
nis[i]++;
nn -= n2[i];
}
}
rep(0, i, 41) {
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
if(a%2==0) return a /2*(a+1);
else return (a+1)/2*a;
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
int medi(int a,int b,int c){
return a+b+c-max({a,b,c})-min({a,b,c});
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
template <typename T>
struct RMQ {
const T e = numeric_limits<T>::max();
function<T(T, T)> fx = [](T x1, T x2) -> T { return min(x1, x2); };
int n;
vector<T> dat;
RMQ(int n_) : n(), dat(n_ * 4, e) {
int x = 1;
while (n_ > x) {
x *= 2;
}
n = x;
}
void set(int i, T x) { dat[i + n - 1] = x; }
void build() {
for (int k = n - 2; k >= 0; k--) dat[k] = fx(dat[2 * k + 1], dat[2 * k + 2]);
}
void update(int i, T x) {
i += n - 1;
dat[i] = x;
while (i > 0) {
i = (i - 1) / 2;
dat[i] = fx(dat[i * 2 + 1], dat[i * 2 + 2]);
}
}
T query(int a, int b) { return query_sub(a, b, 0, 0, n); }
T query_sub(int a, int b, int k, int l, int r) {
if (r <= a || b <= l) {
return e;
} else if (a <= l && r <= b) {
return dat[k];
} else {
T vl = query_sub(a, b, k * 2 + 1, l, (l + r) / 2);
T vr = query_sub(a, b, k * 2 + 2, (l + r) / 2, r);
return fx(vl, vr);
}
}
int find_rightest(int a, int b, T x) { return find_rightest_sub(a, b, x, 0, 0, n); }
int find_leftest(int a, int b, T x) { return find_leftest_sub(a, b, x, 0, 0, n); }
int find_rightest_sub(int a, int b, T x, int k, int l, int r) {
if (dat[k] > x || r <= a || b <= l) {
return a - 1;
} else if (k >= n - 1) {
return (k - (n - 1));
} else {
int vr = find_rightest_sub(a, b, x, 2 * k + 2, (l + r) / 2, r);
if (vr != a - 1) {
return vr;
} else {
return find_rightest_sub(a, b, x, 2 * k + 1, l, (l + r) / 2);
}
}
}
int find_leftest_sub(int a, int b, T x, int k, int l, int r) {
if (dat[k] > x || r <= a || b <= l) {
return b;
} else if (k >= n - 1) {
return (k - (n - 1));
} else {
int vl = find_leftest_sub(a, b, x, 2 * k + 1, l, (l + r) / 2);
if (vl != b) {
return vl;
} else {
return find_leftest_sub(a, b, x, 2 * k + 2, (l + r) / 2, r);
}
}
}
};
signed main(){
ic(a) ic(b)
if(a<6)c(0)
else if(a<12)c(b/2)
else c(b)
}
