#include<bits/stdc++.h>
using namespace std;

#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define loop(i,k,n) for(i=k;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define ss(s) scanf("%s",s)
#define pi(x) printf("%d\n",x)
#define pl(x) printf("%lld\n",x)
#define ps(s) printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << "\n"
#define deb2(x, y) cout << #x <<AC "=" << x << "," << #y << "=" << y << "\n"
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>  pii;
typedef pair<ll, ll>  pll;
typedef vector<int>   vi;
typedef vector<ll>    vl;
typedef vector<pii>   vpii;
typedef vector<pll>   vpll;
typedef vector<vi>    vvi;
typedef vector<vl>    vvl;

// // Temporary macro
// #define int long long

mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
  uniform_int_distribution<int> uid(0, lim - 1);
  return uid(rang);
}
int mpow(int base, int exp);
void ipgraph(int n, int m);
void dfs(int u, int par);

const int mod = 1000000007; // Prime Number
const int N = 3e5, M = N;
// constexpr ll INF = 2e18;
const int special_prime = 982451653l; // The 50,000,000th prime number
//constexpr ld EPS = 1e-9;
//=======================
//=======================

vi g[N];
int a[N];

int lcm(int a, int b)
{
  return (a * b) / __gcd(a, b);
}

void preSolve()
{

}

void solve() {
  int i, j, n, m;
  vpii v(5);
  fo(i, 5)
  {
    int a;
    cin >> a;
    v[i].S = a;
  }
  n = 5;
  fo(i, n)
  {
    v[i].F = (v[i].S + 9) % 10;
  }
  sort(all(v));

  int ans = 0;
  for (i = n - 1; i >= 0; i--)
  {
    ans += v[i].S;
    if (i != 0)
    {
      ans = ((ans + 9) / 10) * 10;
    }
  }
  cout << ans << "\n";


}

int32_t main() {

  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  srand(chrono::high_resolution_clock::now().time_since_epoch().count());

  preSolve();

  int t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}

int mpow(int base, int exp) {
  base %= mod;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((ll)result * base) % mod;
    base = ((ll)base * base) % mod;
    exp >>= 1;
  }
  return result;
}

void ipgraph(int n, int m) {
  int i, u, v;
  while (m--) {
    cin >> u >> v;
    u--, v--;
    g[u].pb(v);
    g[v].pb(u);
  }
}

void dfs(int u, int par) {
  for (int v : g[u]) {
    if (v == par) continue;
    dfs(v, u);
  }
}
