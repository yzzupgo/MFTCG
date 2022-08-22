#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <math.h>
#include <vector>
using namespace std;
struct cww { cww() { ios::sync_with_stdio(false); cin.tie(0); } }star;
map<int, int> ct;
map<int, int> ct2;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<pair<int, int> > vpii;
typedef pair<int, int> pii;
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
typedef vector<ll> vll;
#define INF 0x3f3f3f3f
#define MOD 998244353LL
#define EPS 0.00001
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define FOR(i,a,b) for (int i=(a); i<=(signed)(b); i++)
#define AFOR(i,a) for (int i=0; i<(signed)(a); i++)
#define RFOR(i,a,b) for (int i=(a); i >= b; i--)
#define MN 100005
int n, m, l;
int a, b, c;
string s[MN];
string str;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
std::vector<int> Eratosthenes(const int N)
{
std::vector<bool> is_prime(N + 1);
for (int i = 0; i <= N; i++)
{
is_prime[i] = true;
}
std::vector<int> P;
for (int i = 2; i <= N; i++)
{
if (is_prime[i])
{
for (int j = 2 * i; j <= N; j += i)
{
is_prime[j] = false;
}
P.emplace_back(i);
}
}
return P;
}
ll N;
ll K;
ll A[200100];
int L[200100];
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int X,Y;
cin >> X >> Y;
if (4 * X - Y < 0) cout << "No" << endl;
else if(4*X-Y == 0)cout << "Yes" << endl;
else if ((4 * X - Y) % 2 == 0) { cout << "Yes" << endl; }
else cout << "No" << endl;
return 0;
}
