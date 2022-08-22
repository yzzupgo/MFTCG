#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define el endl
#define for0(i,a,b) for(long long int i=a;i<b;i++)
#define forn(i,b,a) for(long long int i=b;i>=a;i--)
#define for1(i,a,b) for(long long int i=a;i<=b;i++)
#define ss second
#define ff first
#define FAST ios_base::sync_with_stdio(false), cin.tie(NULL);
#define mod 1000000007
#define all(a) a.begin(),a.end()
#define endl "\n"
#define Vi vector<ll>
long long gcd(long long int a, long long int b)
{
if (b == 0)
return a;
return gcd(b, a % b);
}
long long lcm(ll a, ll b)
{
return (a / gcd(a, b)) * b;
}
int X[4]={-1,1,0,0};
int Y[4]={0,0,-1,1};
bool isPrime(ll n)
{
if (n <= 1) return false;
if (n <= 3) return true;
if (n % 2 == 0 || n % 3 == 0) return false;
for (ll i = 5; i * i <= n; i = i + 6)
if (n % i == 0 || n % (i + 2) == 0) return false;
return true;
}
bool isPerfectSquare(long double x)
{
if (x >= 0) {
ll sr = sqrt(x);
return (sr * sr == x);
}
return false;
}
ll Bits(ll number)
{
return (ll)log2(number)+1;
}
bool perfectCube(ll N)
{
ll cube_root;
cube_root = round(cbrt(N));
if (cube_root * cube_root * cube_root == N) {
return true;
}
else {
return false;
}
}
unsigned long long power(unsigned long long x,
ll y, ll p)
{
unsigned long long res = 1;
x = x % p;
while (y > 0)
{
if (y & 1)
res = (res * x) % p;
y = y >> 1;
x = (x * x) % p;
}
return res;
}
unsigned long long modInverse(unsigned long long n,ll p)
{
return power(n, p - 2, p);
}
unsigned long long nCrModPFermat(unsigned long long n,ll r, ll p)
{
if (n < r)
return 0;
if (r == 0)
return 1;
unsigned long long fac[n + 1];
fac[0] = 1;
for (ll i = 1; i <= n; i++)
fac[i] = (fac[i - 1] * i) % p;
return (fac[n] * modInverse(fac[r], p) % p* modInverse(fac[n - r], p) % p)% p;
}
int p[1000005];
void sieve(int p[],int n=1000003)
{
for(int i=3;i<=n;i+=2)
{
p[i]=1;
}
for(int i=3;i*i<=n;i+=2)
{
if(p[i]==1)
for(int j=i*i;j<=n;j+=i)
{
p[j]=0;
}
}
p[2]=1;
p[1]=p[0]=0;
}
void solve(int test_case)
{
ll x,y; cin>>x>>y;
for1(i,0,x)
{
ll crane=i,turtle=x-i;
if(i*2 + turtle*4==y)
{
cout<<"Yes\n";
return;
}
}
cout<<"No\n";
}
int main()
{
FAST
clock_t start, end;
start = clock();
#ifndef ONLINE_JUDGE
freopen("input.txt", "rt", stdin);
freopen("output.txt", "wt", stdout);
#endif
int t=1;
for1(i,1,t)
{
solve(i);
}
end = clock();
double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
clog << endl << "Time taken by program is : " << fixed
<< time_taken << setprecision(5);
clog << " sec " << endl;
}
