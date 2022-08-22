#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define pii pair<int,int>
#define pll pair<lli, lli>
#define vi vector<int>
#define vii vector<pair<int,int>>
#define vll vector<lli>
#define pb push_back
#define mpr make_pair
#define s second
#define f first
#define INF 1000000001
#define inf1 1000000000000000001
#define pie 3.14159265358979323846264338327950L
#define all(x) x.begin(),x.end()
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define testcase() int tc;cin>>tc;while(tc--)
#define clean(x) memset(x,0,sizeof(x))
template<typename A> ostream& operator<<(ostream &cout, vector<A> const &v) {
cout << "["; for(int i = 0; i < v.size(); i++) {if (i) cout << ", "; cout << v[i];} return cout << "]";
}
template<typename A, typename B> ostream& operator<<(ostream &cout, pair<A, B> const &p) { return cout << "(" << p.f << ", " << p.s << ")"; }
template<typename A, typename B> istream& operator>>(istream& cin, pair<A, B> &p) {
cin >> p.first;
return cin >> p.second;
}
lli const mod = 998244353;
lli const maxn= 2e3+7;
namespace modop {
lli madd(lli a, lli b) {
return (a + b) % mod;
}
lli msub(lli a, lli b) {
return (((a - b) % mod) + mod) % mod;
}
lli mmul(lli a, lli b) {
return ((a % mod) * (b % mod)) % mod;
}
lli mpow(lli base, lli exp) {
lli res = 1;
while (exp) {
if (exp % 2 == 1){
res = (res * base) % mod;
}
exp >>= 1;
base = (base * base) % mod;
}
return res;
}
lli minv(lli base) {
return mpow(base, mod - 2);
}
lli mdiv(lli a, lli b) {
return mmul(a, minv(b));
}
}
using namespace modop;
lli fact[300006], ifact[300006];
void init()
{
fact[0] = ifact[0] = fact[1] = ifact[1] = 1;
for (lli i = 2; i < 300004; i++) {
fact[i] = (i * fact[i - 1]) % mod;
ifact[i] = minv(fact[i]);
}
}
lli nck(lli n, lli k) {
if (n < k) return 0;
lli dem = (ifact[n - k] * ifact[k]) % mod;
return (fact[n] * dem) % mod;
}
void solve()
{
int a,b;cin>>a>>b;
if(a*4<b )cout<<"No\n";
if(a==1 and (b!=4 and b!=2))
{
cout<<"No\n";
return;
}
else
{
cout<<"Yes\n";return;
}
if((b-4)%2!=0)cout<<"No\n";
else cout<<"Yes\n";
}
int main()
{
solve();
}
