#include <iostream>
#include <sstream>
#include <vector>
#include <set>
#include <map>
#include <deque>
#include <algorithm>
#include <cmath>
#include <string>
#include <numeric>
#include <float.h>
#include <climits>
#include <tuple>
#include <bitset>
#include <iomanip>
using namespace std;
using ll = long long;
using Graph = vector<vector<ll>>;
#define rep(n,e) for(ll n = 0;n < e;n++)
#define reps(n,s,e) for(ll n = s;n < e;n++)
#define all(itr) itr.begin(),itr.end()
bool is_prime(ll N)
{
if (N == 1) return false;
for (ll n = 2; n * n <= N; n++)
{
if (N % n == 0) return false;
}
return true;
}
vector<pair<ll, ll>> prime_factorize(ll N)
{
vector<pair<ll, ll>> ans;
for (ll n = 2; n * n <= N; n++)
{
if (N % n != 0) continue;
ll ex = 0;
while (N % n == 0)
{
ex++;
N /= n;
}
ans.push_back({ n,ex });
}
if (N != 1) ans.push_back({ N,1 });
return ans;
}
vector<ll> enum_divisors(ll N)
{
vector<ll> ans;
for (ll n = 1; n * n <= N; n++)
{
if (N % n == 0)
{
ans.push_back(n);
if (n != N / n)
{
ans.push_back(N / n);
}
}
}
sort(all(ans));
return ans;
}
ll digit(ll N)
{
ll cnt = 1;
while (N)
{
N /= 10;
if (N != 0) cnt++;
}
return cnt;
}
template<class T> inline bool chmin(T& a, T b) {
if (a > b) {
a = b;
return true;
}
return false;
}
template<class T> inline bool chmax(T& a, T b) {
if (a < b) {
a = b;
return true;
}
return false;
}
ll dp[3][100010LL];
vector<bool> seen;
void dfs(const Graph& G, ll n)
{
if (seen[n]) return;
seen[n] = true;
for (auto g : G[n])
{
dfs(G, g);
}
}
ll sum = 0;
ll MOD = 1000000000 + 7;
void solve(ll& A, ll& B)
{
if (A < B)
{
sum += A;
B -= A;
A = 0;
if (B - A < 0) B = 0;
else B -= A;
}
else
{
sum += B;
A -= B;
B = 0;
}
}
int main()
{
ll X, Y;
cin >> X >> Y;
reps(n, 0, X+1)
{
ll md = Y - 2 * n;
if ((md % 4 == 0)&&(md/4+n==X))
{
cout << "Yes";
return 0;
}
}
cout << "No";
return 0;
}
