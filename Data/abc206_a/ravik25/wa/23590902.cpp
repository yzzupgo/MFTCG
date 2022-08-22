#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define ll long long
#define ld long double
#define mod 1000000007
#define pb push_back
#define inf 1000000000000000000
#define ff first
#define ss second
#define deb(x) cout<<#x<<" "<<x<<"\n"
#define Clear(x) memset(x,0,sizeof(x))
#define all(x) (x).begin(),(x).end()
void checkpoint1() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
freopen("Error.txt", "w", stderr);
#endif
}
bool comp(pair< ll, ll > &a, pair< ll, ll > &b) {
if(a.ff != b.ff) {
return a.ff < b.ff;
} else {
if(a.ss > b.ss) {
return b.ss < a.ss;
} else if(a.ss < b.ss) {
return a.ss < b.ss;
}
}
return a.ff > b.ff;
}
ll powe(ll a, ll b) {
ll res = 1;
while(b > 0) {
if(b & 1) {
res *= a;
res %= mod;
}
a *= a;
a %= mod;
b >>= 1;
}
return res;
}
void terminAtor() {
ll n;
cin >> n;
n = (ld)1.08 * n;
if(n < 206) {
cout << "yay";
} else if(n > 206) {
cout << ":(";
} else {
cout << "so-so";
}
}
int main() {
checkpoint1();
auto startrrr = high_resolution_clock::now();
cout << setprecision(20);
terminAtor();
auto stoprrr = high_resolution_clock::now();
auto duration = duration_cast<microseconds>(stoprrr - startrrr);
#ifndef ONLINE_JUDGE
cerr << "Time: " << duration.count() / 1000.0 << "\n";
#endif
return 0;
}
