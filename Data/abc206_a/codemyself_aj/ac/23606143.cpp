#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define int long long int
#define ll int
#define pb push_back
#define mp make_pair
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
#define mii map<int,int>
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int> >
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x,y) fixed<<setprecision(y)<<x
#define mk(arr,n,type) type *arr=new type[n];
#define w(x) int x; cin>>x; while(x--)
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define ss(s) scanf("%s",s)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define MODULO(a,b) ((a>=0)?(a%b):((b+a)%b))
#define tr(it,a) for(auto it = a.begin(); it != a.end(); it++)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int NcR(int n, int r) {
int p = 1, k = 1;
if(n - r < r) {
r = n - r;
}
if(r != 0) {
while(r) {
p *= n;
k *= r;
int m = __gcd(p, k);
p /= m;
k /= m;
n--;
r--;
}
} else {
p = 1;
}
return p;
}
map<int, int> fib;
int f(int n) {
if(fib.count(n)) {
return fib[n];
}
int k = n / 2;
if(n % 2 == 0) {
return fib[n] = (f(k) * f(k) + f(k - 1) * f(k - 1)) % mod;
} else {
return fib[n] = (f(k) * f(k + 1) + f(k - 1) * f(k)) % mod;
}
}
int toInt(string s) {
stringstream obj(s);
int x = 0;
obj >> x;
return x;
}
const int NN = 1000000;
bool prime[NN + 1];
vi primes_v;
void SieveOfEratosthenes() {
memset(prime, true, sizeof(prime));
for(int p = 2; p * p <= NN; p++) {
if(prime[p] == true) {
for(int i = p * p; i <= NN; i += p) {
prime[i] = false;
}
}
}
}
void solve() {
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int n;
cin >> n;
double NN = (1.0 * n) * (1.08);
int N = floor(NN);
int p = 206;
if(N < p) {
cout << "Yay!";
} else if(N == p) {
cout << "so-so";
} else {
cout << ":(";
}
}
void c_p_c() {
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
}
int32_t main() {
c_p_c();
solve();
return 0;
}
