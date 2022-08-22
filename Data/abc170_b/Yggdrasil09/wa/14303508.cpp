#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define foi(i,n) for(int i=0;i<n;i++)
#define Foi(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define fol(i,n) for(ll i=0;i<n;i++)
#define Fol(i,k,n) for(ll i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define ss(s) scanf("%s",s)
#define pi(x) printf("%d\n",x)
#define pl(x) printf("%lld\n",x)
#define ps(s) printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x,y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it,a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
int mpow(int base, int exp);
void ipgraph(int m);
void dfs(int u, int par);
const int mod = 1000000007;
const int N = 3e5, M = N;
vi g[N];
int a[N];
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
void ipgraph(int n, int m){
int i, u, v;
while(m--){
cin>>u>>v;
g[u-1].pb(v-1);
g[v-1].pb(u-1);
}
}
void dfs(int u, int par){
for(int v:g[u]){
if (v == par) continue;
dfs(v, u);
}
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int x,y;
cin>>x>>y;
if((y-2*x)/2.0==float((y-2*x)/2) && (y-2*x)/2>=0 && (x-(y-2*x)/2)>=0)
cout<<"YES";
else
{
cout<<"NO";
}
return 0;
}
