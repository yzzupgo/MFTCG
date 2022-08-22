#include <bits/stdc++.h>
using namespace std;
#define forn for (ll i = 0; i < n; i++)
#define form for (ll j = 0; j < m; j++)
#define NO cout << "NO\n";
#define YES cout << "YES\n";
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for (ll i = a; i < b; i++)
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll, ll> pi;
ll gcd(ll a, ll b){
ll r;
while (b != 0){
r = a % b;
a = b;
b = r;
}
return a;
}
ll *calc_z(string s){
ll n = s.size();
ll *z = new ll[n] {0};
ll l = 0, r = 0;
for (ll i = 1; i < n; i++){
if (r >= i) z[i] = min(z[i-l], r-i+1);
while (z[i]+i < n && s[z[i]] == s[z[i]+i]) z[i]++;
if (i + z[i] - 1 > r){
l = i;
r = i+z[i]-1;
}
}
return z;
}
ll find_lower(ll *a, ll n, ll v){
ll l = -1, r = n;
while (r>l+1){
ll m = (l+r)/2;
if (a[m] >= v) r = m;
else l = m;
}
if (r == n) return n-1;
if (a[r] == v) return r;
return r == 0 ? 0 : r-1;
}
void init(){
}
void solve(){
int x, y;
cin >> x >> y;
int s = 4*x-y;
if (s == 0 && y % 2 == 0) cout << "Yes\n";
else if (s > 0 && s % 2 == 0) cout << "Yes\n";
else cout << "No\n";
}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
solve();
return 0;
}
