#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
#define endl "\n"
#define pi 3.14159265358979323846
#define inf 1000000000
#define setbits(x) __builtin_popcountll(x)
#define ll long long
#define int long long
#define ld long double
#define lb lower_bound
#define ub upper_bound
#define times int t;cin>>t;for(int tt=1;tt<=t;tt++)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e5+50;
const ll INF = 1e9;
int dx[]={-1,-1,-1,0,1,1,1,0,0};
int dy[]={-1,0,1,1,1,0,-1,-1,0};
template<typename T>
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
const int mod = 1e9 + 9;
bool compare(const pair<int,int>&i, const pair<int,int>&j){ return i.second < j.second; }
ll modexp(ll x,ll n){ ll r=1; while(n){ if(n&1)r=(r*x)%mod; x=(x*x)%mod; n>>=1;} return r%mod;}
ll modinv(ll x){ return modexp(x,mod-2);}
vector<ll>sieve(int n){int*arr=new int[n + 1](); vector<ll>vect; for(int i=2;i<=n;i++) if(arr[i]==0) {vect.push_back(i); for (int j=2*i;j<=n;j+=i) arr[j]=1;} return vect;}
void google(int t) {cout << "Case #" << t << ": ";}
ll mod_add(ll a,ll b){a=a%mod; b=b%mod; return (((a+b)%mod)+mod)%mod;}
ll mod_mul(ll a,ll b){a=a%mod; b=b%mod; return (((a*b)%mod)+mod)%mod;}
ll mod_sub(ll a,ll b){a=a%mod; b=b%mod; return (((a-b)%mod)+mod)%mod;}
ll mod_div(ll a,ll b){a=a%mod; b=b%mod; return (mod_mul(a,modinv(b))+mod)%mod;}
void solve(){
int x,y;
cin>>x>>y;
if(y%2){
cout<<"No"<<endl;
return ;
}
if(y>=2*x and y<=4*x){
cout<<"Yes"<<endl;
return ;
}
else{
cout<<"NO"<<endl;
return ;
}
return ;
}
int32_t main()
{
fio
solve();
return 0;
}
