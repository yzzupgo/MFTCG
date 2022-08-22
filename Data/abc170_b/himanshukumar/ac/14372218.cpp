#include<bits/stdc++.h>
#include<numeric>
#define int long long
#define ld long double
#define all(x) x.begin(),x.end()
const int maxn=1000000;
#define what_is(x) cerr << #x << " is " << x << endl;
const int MOD = 1e9 + 7;
using namespace std;
string abc="abcdefghijklmnopqrstuvwxyz";
int powmod(int a, int b, int MOD = MOD){
if(!a and !b) return 1ll;
if(!a) return a;
int res = 1ll;
b %= (MOD - 1ll), a %= MOD;
while(b){
if(b%2 == 1) res = (res * a) % MOD;
a = (a * a) % MOD;
b /= 2;
}
return res;
}
int popcount(uint32_t n)
{
n = n - ((n >> 1) & 0x55555555);
n = (n & 0x33333333) + ((n >> 2) & 0x33333333);
return ((n + (n >> 4) & 0xF0F0F0F) * 0x1010101) >> 24;
}
bool check(int n) {return (((double)sqrt(n)-floor((double)sqrt(n)))==0);}
vector<bool> sieve(maxn + 1, true);
void fillprime() {
sieve[0] = sieve[1] = false;
for (int i = 2; i <= maxn; ++i) {
if (sieve[i] && (int) i * i <= maxn) {
for (int j = i * i; j <= maxn; j += i) {
sieve[j] = false;
}
}
}
}
void solve() {
int x,y;
cin>>x>>y;
double n=(double)(y-(2*x))/2;
if(ceil(n)-floor(n)!=0) {
cout << "No";
return;
}
int m=x-n;
if(n>=0 and m>=0) cout<<"Yes";
else cout<<"No";
}
int32_t main() {
ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
solve();
}
