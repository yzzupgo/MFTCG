#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); i++)
#define REP1(i,n) for(int i = 1; i <= (n); i++)
#define REPD(i,a,b) for (int i=(a);i<(b);i++)
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef set<int> si;
typedef vector<si> vsi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef pair<int, int> pi;
typedef queue<int> qi;
typedef queue<pi> qpi;
typedef pair<ll, ll> pll;
typedef queue<pll> qpll;
typedef vector<pi> vpi;
typedef vector<pll> vpll;
const int mod = 1000000007;
const int INF = 1001001001;
int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[8] = {0, 1, 0, -1, 1, -1, 1, -1};
struct edge {
int from;
int to;
int cost;
};
typedef struct edge se;
typedef vector<edge> ve;
unsigned Euclidean_gcd(unsigned a, unsigned b) {
if(a < b) return Euclidean_gcd(b, a);
unsigned r;
while ((r=a%b)) {
a = b;
b = r;
}
return b;
}
vpll PrimeFactorization(ll n) {
vpll res;
for (ll i=2; i*i<=n; i++) {
if(n%i!=0) continue;
ll ex=0;
while(n%i==0) {
ex++;
n/=i;
}
res.push_back(pll(i,ex));
}
if(n!=1) res.push_back(pll(n,1));
return res;
}
int main() {
int x,y;
cin >> x >> y;
string ans="No";
if(2*x<=y&&y<=4*x&&y%2==0) ans="Yes";
cout << ans << endl;
return 0;
}
