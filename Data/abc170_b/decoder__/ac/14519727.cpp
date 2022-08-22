#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ln cout<<endl;
#define vi vector<int>
#define vll vector<long long>
#define sortl(vec) sort(vec.begin(), vec.end());
#define sortr(vec) sort(vec.rbegin(), vec.rend());
#define forn(i,x,n) for(long long i = x; i < n; i++)
#define revn(i,n,x) for(long long i = n; i >= x ; i--)
#define in(vec) for(auto &it : vec) cin >> it;
#define loop(vec) for(auto &it : vec)
#define out(vec) for(auto &it : vec) cout << it << " "; ln
#define ll long long
#define mod 1000000007
#define debug(x) cout << x << endl;
#define pb emplace_back
#define mp make_pair
#define um unordered_map
#define pii pair<int, int>
#define pll pair<ll, ll>
#define f first
#define s second
#define pi 3.14159265359
#define CLOCK cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
using namespace std;
ll power(ll x, ll y, ll p) {
ll res = 1;
x = x % p;
while (y > 0) {
if (y & 1)
res = (res * x) % p;
y = y >> 1;
x = (x * x) % p;
}
return res;
}
ll modulo(ll a, ll b) {
ll c = a % b;
return (c < 0) ? c + b : c;
}
int main() {
#ifndef ONLINE_JUDGE
freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);
#endif
fastio
ll t = 1;
while (t--) {
ll x, y;
cin >> x >> y;
double b = y / 2.0 - x;
double a = x - b;
if (y > x && a >= 0 && b >= 0 && floor(a) == ceil(a) && floor(b) == ceil(b))
cout << "Yes" << endl;
else
cout << "No" << endl;
}
CLOCK
return 0;
}
