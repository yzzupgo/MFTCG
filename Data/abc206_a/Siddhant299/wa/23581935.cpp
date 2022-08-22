#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ull unsigned long long
#define scn(n) scanf("%d",&n)
#define lscn(n) scanf("%lld",&n)
#define lpri(n) printf("%lld",n)
#define pri(n) printf("%d",n)
#define pln() printf("\n")
#define priln(n) printf("%d\n",n)
#define lpriln(n) printf("%lld\n",n)
#define rep(i,init,n) for(int i=init;i<n;i++)
#define rev(i,n) for(int i=n-1;i>=0;i--)
#define bat(i,n) for(int i=n;i>=0;i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define gcd __gcd
#define inf INT_MAX
#define ninf INT_MIN
#define inf INT_MAX
#define lmax LLONG_MAX
#define lmin -100000000000000ll
#define cyborg ll ttt; cin>>ttt; while(ttt--)
#define VC vector<char>
#define vi vector<ll>
#define MP map<ll,ll>
#define lb lower_bound
#define endl "\n"
#define ub upper_bound
#define all(a) a.begin(),a.end()
#define mmh map<int,int>
#define VP vector<pair<ll,ll>>
#define Wwoman(a,n) rep(i,0,n)cin>>a[i];
#define superman(v) sort(v.begin(),v.end());
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define set_bits __builtin_popcountll
#define aquaman return 0
const int N = 1e6 + 4;
const int mod = 1e9 + 7;
int modularExponentiation(int x, int n, int mod) {
int result = 1;
while(n > 0) {
if(n % 2 == 1) {
result = (result * x) % mod;
}
x = (x * x) % mod;
n = n / 2;
}
return result;
}
void sieve(int N) {
bool isPrime[N + 1];
for(int i = 0; i <= N; ++i) {
isPrime[i] = true;
}
isPrime[0] = false;
isPrime[1] = false;
for(int i = 2; i * i <= N; ++i) {
if(isPrime[i] == true) {
for(int j = i * i; j <= N ; j += i) {
isPrime[j] = false;
}
}
}
}
void batman() {
int n;
cin >> n;
int x = n + (n * 8) / 100;
if(x > n) {
cout << "Yay!" << endl;
} else if(x == n) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
int main() {
flash;
batman();
aquaman;
}
