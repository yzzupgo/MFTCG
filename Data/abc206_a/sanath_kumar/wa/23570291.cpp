#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define mod 1000000007
#define inf 1e9
#define endl "\n"
#define pb push_back
#define vi vector<ll>
#define vs vector<string>
#define pii pair<ll,ll>
#define ump unordered_map
#define mp make_pair
#define pq_max priority_queue<ll>
#define pq_min priority_queue<ll,vector<ll>,greater<ll>>
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
#define mid(l,r) (l+(r-l))/2
#define bitc(x) __builtin_popcount(x)
#define loop(i,a,b) for(int i=(a);i<=(b);i++)
#define looprev(i,a,b) for(int i=(a);i>=(b);i--)
#define iter(c,it) for(__typeof(c.begin()) it=c.begin();it!=c.end();it++)
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define log(args...) {string _s=#args;replace(_s.begin(),_s.end(),',',' ');stringstream _ss(_s);istream_iterator<string> _it(_ss);err(_it,args);}
#define logarr(arr,a,b) for(int z=(a);z<=(b);z++) cout<<(arr[z])<<" ";cout<<endl;
template<typename T> T gcd(T a, T b) {
if(b == 0) {
return a;
}
return gcd(b, a % b);
}
template<typename T> T lcm(T a, T b) {
return a * (b / gcd(a, b));
}
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
cout << *it << " = " << a << endl;
err(++it, args...);
}
ll *getfactorial() {
int m = 1e6;
ll *fact = new ll[m + 1];
fact[0] = 1;
loop(i, 1, m) {
fact[i] = (fact[i - 1] * i) % mod;
}
return fact;
}
vi *getfactors() {
int n = 2e5;
vi *factors = new vi[n + 5];
loop(i, 1, n) {
for(int j = i; j <= n; j += i) {
factors[j].pb(i);
}
}
return factors;
}
ll power(ll a, ll b, ll m = mod) {
if(b == 0) {
return 1;
}
ll smallans = power(a, b / 2, m);
ll ans = (smallans * smallans) % m;
if(b % 2 == 1) {
ans = (ans * a) % m;
}
return ans;
}
bool *isprime() {
int m = 1e6;
bool *p = new bool[m];
loop(i, 0, m) p[i] = true;
p[0] = false;
p[1] = false;
loop(i, 2, sqrt(m)) {
for(int j = 2 * i; j <= m; j += i) {
p[j] = false;
}
}
return p;
}
ll nCr(ll n, ll r, int m = mod) {
if(n < r) {
return 0;
}
ll dp[2][r + 5];
memset(dp, 0, sizeof(dp));
int i = 1;
loop(k, 0, 1) dp[k][0] = 1;
loop(k, 1, n) {
loop(j, 1, r) {
dp[i][j] = dp[i ^ 1][j] + dp[i ^ 1][j - 1];
}
i = i ^ 1;
}
return dp[i ^ 1][r];
}
bool isprime(int x) {
if(x == 2 or x == 3) {
return true;
}
loop(i, 2, sqrt(x)) {
if(x % i == 0) {
return false;
}
}
return true;
}
int main() {
boost
int n;
cin >> n;
int x = (1.08) * n;
if(x < 206) {
cout << "yay!" << endl;
} else if(x == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
