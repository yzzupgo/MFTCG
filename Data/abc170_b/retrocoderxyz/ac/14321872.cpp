#include <bits/stdc++.h>
#include <ext/pb_ds/detail/standard_policies.hpp>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define alli(a,n,k) (a + k), (a + n + k)
#define FP(i,a,b,k) for (__typeof(a) i = a; i < b; i += k)
#define FS(i,a,b,k) for (__typeof(a) i = a; i > b; i -= k)
#define IT(it,a) for (__typeof(a.begin()) it = a.begin(); it != a.end(); ++it)
#define eps 1e-6
#define pi 3.141592653589793
using namespace std;
using namespace __gnu_pbds;
template <class T>
inline T gcd(T x, T y)
{
if (!y)
return x;
return gcd(y, x % y);
}
typedef vector<int> VII;
typedef vector<ll> VLL;
typedef pair<int, int> PII;
typedef vector<pair<int, int>> VPII;
typedef vector<pair<int, PII>> VPPI;
const int MOD = 1e9 + 7;
const int INF = 1e9;
inline ll modulo(ll a, ll m)
{
return (a % m + m) % m;
}
inline ll modInverse(ll a, ll m)
{
assert(__gcd(a, m) == 1);
ll m0 = m;
ll y = 0, x = 1;
if (m == 1)
return 0;
while (a > 1)
{
ll q = a / m;
ll t = m;
m = a % m, a = t;
t = y;
y = x - q * y;
x = t;
}
if (x < 0)
x += m0;
return x;
}
inline ll modPow(ll x, ll y, ll m)
{
if (y == 0)
return 1LL;
else if (y == 1)
return x;
else
{
ll ans = modPow(x, y / 2, m) % m;
if (y & 1)
{
return (((ans * ans) % m) * x) % m;
}
else
{
return (ans * ans) % m;
}
}
}
vector<string> split(char d,string s)
{
stringstream ss(s);
string t;
vector<string> words;
while(getline(ss,t,d))
{
words.pb(t);
}
return words;
}
int main(int argc, char *argv[])
{
#ifdef LOCAL
auto start = chrono::high_resolution_clock::now();
#endif
ios::sync_with_stdio(false);
cin.tie(NULL);
int x,y;
cin >> x >> y;
for (int i = 0; i <= x;++i)
{
if(i*2+(x-i)*4==y)
{
cout << "Yes";
exit(0);
}
}
cout << "No";
#ifdef LOCAL
auto end = chrono::high_resolution_clock::now();
double time_taken =
chrono::duration_cast<chrono::nanoseconds>(end - start).count();
time_taken *= 1e-9;
cerr << "\nTime taken by program is : " << fixed
<< time_taken << setprecision(9);
cerr << " sec" << endl;
#endif
return 0;
}
