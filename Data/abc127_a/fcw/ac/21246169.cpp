#include <bits/stdc++.h>
using namespace std;
#define deb(k) cerr << #k << ": " << k << "\n";
#define size(a) (int)a.size()
#define fastcin cin.tie(0)->sync_with_stdio(0);
#define st first
#define nd second
#define pb push_back
#define mk make_pair
#define int long long
typedef long double ldbl;
typedef double dbl;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;
typedef vector<int> vint;
#define MAXN 300100
#define MAXLG 20
const int inf = 0x3f3f3f3f;
const ll mod = 1000000007;
const ll linf = 0x3f3f3f3f3f3f3f3f;
const int N = 300100;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
void solve(){
int a, b;
cin>>a>>b;
if(a <= 5) cout<<"0\n";
else if(a <= 12) cout<<b/2<<"\n";
else cout<<b<<"\n";
}
int32_t main(){
fastcin;
int t_ = 1;
while(t_--)
solve();
return 0;
}
