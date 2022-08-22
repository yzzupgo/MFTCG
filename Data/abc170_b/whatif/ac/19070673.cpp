#include <bits/stdc++.h>
#define what_is(x) cout << "value of " << #x << " :: " << x << "\n"
#define what_iss(x,y) cout << "value of " << #x << " :: " << x << ", value of " << #y << " :: " << y << "\n"
using namespace std;
using ll=long long int;
using lld=long double;
#define mp make_pair
#define pb push_back
#define accu accumulate
#define pll pair<ll,ll>
#define pii pair<int,int>
#define pls pair<ll,string>
#define psl pair<string,ll>
#define pis pair<int,string>
#define psi paid<string,int>
#define x first
#define y second
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define rep(i,a,n) for( ll i=a; i<n; i++)
#define per(i,a,n) for( ll i=n-1; i>=a; i--)
#define repp(i,a,n,p) for( ll i=a; i<n; i+=p)
#define all(c) (c).begin(), (c).end()
#define mod 1000000007
#define Size 100000
ll bin_pow (ll a, ll b) {
if (b == 0) return 1;
long long res = bin_pow(a, b / 2);
if (b % 2) return res * res * a;
else return res * res;
}
template <typename t> inline void print (const t & v){
for (const auto & i: v) {
std::cout << i << " ";
}
std::cout << '\n';
}
string dec_to_bin (int n) {
string binary = std::bitset <8> ( n ).to_string ( );
return binary;
}
unsigned long bin_to_dec (string s) {
unsigned long decimal = std::bitset <8> ( s ).to_ulong ( );
return decimal;
}
unsigned int next_power_of2 (unsigned int v) {
v--;
v |= v >> 1;
v |= v >> 2;
v |= v >> 4;
v |= v >> 8;
v |= v >> 16;
v++;
return v;
}
int digit (ll i) {
return i > 0 ? (int) log10 ((double) i) + 1 : 1;
}
int main () {
fast;
int N, X;
cin >> N >> X;
int mn_X = 2 * N;
int mx_X = 4 * N;
if (mn_X <= X && X <= mx_X) {
if (X & 1) cout << "No\n";
else cout << "Yes\n";
}
else cout << "No\n";
}
