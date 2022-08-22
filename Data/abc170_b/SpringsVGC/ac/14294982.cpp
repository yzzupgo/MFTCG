#include <stdio.h>
#include <cmath>
#include <tuple>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <iostream>
#include <queue>
#include <stack>
#define ll long long
#define ld long double
using namespace std;
#define max(A,B) (((A)>(B)) ? (A) : (B))
#define min(A,B) (((A)<(B)) ? (A) : (B))
#define abs(A) (((A)<0) ? (-(A)):(A))
#define celi(A,B) (((A)+(B)-1) / (B))
#define rep(i,n) for(ll i = 0; i < (n); i++)
ll gcd(ll a, ll b) {
if (a > b) {
a = a + b;
b = a - b;
a = a - b;
}
if (b % a == 0) return a;
return gcd(b % a, a);
}
ll lcm(ll a, ll b) {
return (a / gcd(a, b)) * b;
}
#define MAXNUM 500010
int prime[MAXNUM], pcnt;
int defac[MAXNUM][2], dcnt;
int era[MAXNUM];
int input[MAXNUM];
void defac_precompute(int maxnum) {
int i, j;
for (i = 2; i <= maxnum; i++) era[i] = i;
pcnt = 0;
for (i = 2; i <= maxnum; i++) {
if (era[i] == 0) continue;
prime[pcnt++] = i;
j = i;
while (j <= maxnum) {
era[j] = 0;
j += i;
}
}
}
vector<int> facs;
int permut[200200];
int prdfac(int x) {
int i, bx = x, p1 = 1, p2 = 1, cnt;
dcnt = 0;
for (i = 0; i < pcnt; i++) {
if (bx % prime[i] == 0) {
defac[dcnt][0] = prime[i];
defac[dcnt][1] = 0;
while (bx % prime[i] == 0) {
bx /= prime[i];
defac[dcnt][1]++;
}
dcnt++;
}
if (bx == 1) break;
}
if (bx > 1) {
defac[dcnt][0] = bx;
defac[dcnt][1] = 1;
dcnt++;
}
cnt = 0;
int facnum = 1, tmpfac, pos = 0;
for (i = 0; i < dcnt; i++) facnum *= (defac[i][1] + 1), permut[i] = 0;
facs.clear();
for (i = 0; i < facnum; i++) {
tmpfac = 1;
for (int j = 0; j < dcnt; j++) tmpfac *= pow(defac[j][0], permut[j]);
permut[0]++;
pos = 0;
while (permut[pos] > defac[pos][1]) {
permut[pos] = 0;
pos++;
if (pos == dcnt) break;
permut[pos]++;
}
facs.push_back(tmpfac);
}
sort(facs.begin(), facs.end());
return cnt;
}
tuple<ll, ll, ll> extended_euclidean(ll a, ll b) {
if (b == 0) return make_tuple(a, 1, 0);
int g, x, y;
tie(g, x, y) = extended_euclidean(b, a % b);
return make_tuple(g, y, x - (a / b) * y);
}
#define MOD 998244353
int fac[MAXNUM];
int invfac[MAXNUM];
void comb_preprocess(int maxval) {
invfac[0] = invfac[1] = fac[0] = fac[1] = 1;
for (int i = 2; i <= maxval; i++)fac[i] = (ll)fac[i - 1] * i % MOD;
for (int i = 2; i <= maxval; i++)invfac[i] = (ll)(MOD - (MOD / i)) * invfac[MOD % i] % MOD;
for (int i = 2; i <= maxval; i++)invfac[i] = (ll)invfac[i - 1] * ((invfac[i] + MOD) % MOD) % MOD;
}
int Comb(int n, int r) {
return (ll)fac[n] * invfac[r] % MOD * invfac[n - r] % MOD;
}
vector<int> getPi(string p) {
int m = (int)p.size(), j = 0;
vector<int> pi(m, 0);
for (int i = 1; i < m; i++) {
while (j > 0 && p[i] != p[j]) j = pi[j - 1];
if (p[i] == p[j]) pi[i] = ++j;
}
return pi;
}
#define INF 1e6+1
string common(const string& word, const string& rev) {
vector<int> pi = getPi(rev);
int m = word.size();
int begin = 0, matched = 0;
while (begin + matched < m) {
if (word[begin + matched] == rev[matched]) {
matched++;
if (begin + matched == m) {
break;
}
}
else {
if (matched == 0) {
begin++;
}
else {
begin += matched - pi[matched - 1];
matched = pi[matched - 1];
}
}
}
return word.substr(begin, m - begin);
}
vector<int> gr[100100];
int col[100100];
queue<pair<int, int>> Q;
stack<int> S;
void solve(int tc) {
int x, y;
cin >> x >> y;
if (y % 2 == 0 && 2 * x <= y && y <= 4 * x) cout << "Yes" << endl;
else cout << "No" << endl;
}
signed main() {
int T = 1, tc;
for (tc = 1; tc <= T; tc++) solve(tc);
}
