#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i = (a);i <= (b);i++)
#define per(i,a,b) for(int i = (a);i >= (b);i--)
#define pii pair<int,int>
#define pll pair<long long, long long>
#define fi first
#define se second
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1e9 + 7;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int inf = 0x3f3f3f3f;
const int maxn = 2e5 + 5;
const double eps = 1e-8;
const double pi = acos(-1.0);
ll gcd(ll a,ll b){return !b?a:gcd(b,a%b);}
ll lcm(ll a,ll b){return a * b / gcd(a,b);}
ll qw(ll x,ll y){ll res = 1;while(y){if(y & 1) res *= x;x = x * x;y >>= 1;}return res;}
ll poww(ll x,ll y,ll p){ll ans = 1;while(y){if(y & 1) ans = ans * x % p;x = x * x % p;y >>= 1;}return ans % p;}
bool isp(ll x){if(x < 2) return 0; for(ll i = 2;i * i <= x;i++){if(x % i == 0) return 0;}return 1;}
int x,y;
void solve(){
bool ok = 0;
for(int i = 0;i <= x;i++){
if(i * 2 + (x - i) * 4 == y){
ok = 1;
}
}
if(ok) cout << "Yes" << endl;
else cout << "No" << endl;
return;
}
int main(){
ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
cin >> x >> y;
solve();
return 0;
}
