#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (ll i = (a); i < (b); i++)
#define FORD(i,a,b) for (ll i = a ; i > b ; i--)
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define PI 3.14159265
typedef long long ll;
#define vl vector<ll>
#define IN(inp) ll inp;cin>>inp;
#define pb push_back
#define all(a) a.begin(),a.end()
#define FR(i,a) for(auto &i:a)
#define rvl(a,n) vl a;FOR(i,0,n){IN(in); a.pb(in);}
#define test ll t; cin>>t; while(t--)
#define endl "\n"
#define what(A) cout<<#A<<" is "<<A<<endl;
ll MAX = 100000000000000;
ll MOD = 1000000007;
string yes = "YES", no = "NO";
ll power(ll a, ll n, ll mod) {
ll res = 1;
while(n) {
if(n % 2) {
res = (res * a) % mod;
}
n /= 2;
a = (a * a) % mod;
}
return res;
}
ll GCD(ll x, ll y) {
if(y == 0) {
return x;
}
return GCD(y, x % y);
}
void solve() {
double n;
cin >> n;
if(((ll)(n * 1.08)) > 206) {
cout << ":(" << endl;
} else if(((ll)(n * 1.08)) == 206) {
cout << "so-so" << endl;
} else {
cout << "Yay!" << endl;
}
}
int main() {
fastio
#ifndef ONLINE_JUDGE
freopen("input.txt", "rt", stdin);
freopen("output.txt", "wt", stdout);
#endif
clock_t start, end;
start = clock();
{
solve();
}
end = clock();
double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
clog << endl << "Time taken by program is : " << fixed
<< time_taken << setprecision(5);
clog << " sec " << endl;
return 0;
};
