#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define SI(a) scanf("%d",&a)
#define SLL(a) scanf("%lld",&a)
#define SL(a) scanf("%ld",&a)
#define PI(a) printf("%d\n",a)
#define PL(a) printf("%ld\n",a)
#define PLL(a) printf("%lld\n",a)
#define SC(a) scanf("%c",&a)a
#define PC(a) printf("%c",a)
typedef long long ll;
#define mod 1000000007
#define W while
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define INF INT_MAX
#define fr(i,a,b) for(int i=a;i<=b;i++)
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pll;
long double PIE = acos(-1);
const ll N = 1e5 + 5;
ll Ans = 1;
bool done[1000009];
vector < ll > primes;
void FindPrime(ll N) {
done[1] = 1;
for(int i = 2; i <= N; i++) {
if(done[i]) {
continue;
}
for(int j = i * 2; j <= N; j += i) {
done[j] = 1;
}
primes.push_back(i);
}
}
ll solve(ll Num) {
for(int i = 0; i < primes.size(); i++) {
int p = primes[i];
if(p * p * p > Num) {
break;
}
ll Count = 1;
while(Num % p == 0) {
Num /= p, Count++;
}
Ans *= Count;
}
ll sq = (ll)sqrt(Num);
if(!done[Num]) {
Ans *= 2;
} else if(sq * sq == Num && !done[sq]) {
Ans *= 3;
} else if(Num != 1) {
Ans *= 4;
}
return Ans;
}
ll fact[N], invfact[N];
ll pow(ll a, ll b, ll m) {
ll ans = 1;
while(b) {
if(b & 1) {
ans = (ans * a) % m;
}
b /= 2;
a = (a * a) % m;
}
return ans;
}
ll modinv(ll k) {
return pow(k, mod - 2, mod);
}
ll nCr(ll x, ll y) {
if(y > x) {
return 0;
}
ll num = fact[x];
num *= invfact[y];
num %= mod;
num *= invfact[x - y];
num %= mod;
return num;
}
void initinv() {
fact[0] = 1;
fr(i, 1, N) {
fact[i] = (i * fact[i - 1]) % mod;
}
invfact[N] = modinv(fact[N]);
for(int i = N - 1; i >= 0; i--) {
invfact[i] = ((i + 1) * invfact[i + 1]) % mod;
}
}
int main() {
int t;
cin >> t;
W(t--) {
int n;
cin >> n;
n *= 108;
n /= 100;
if(n < 206) {
cout << "Yay!\n";
} else if(n == 206) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
}
return 0;
}
