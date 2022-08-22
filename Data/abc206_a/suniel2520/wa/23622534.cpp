#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define mkp make_pair
#define fastio ios::sync_with_stdio(0) , cin.tie(0) , cout.tie(0);
#define all(x) (x).begin(),(x).end()
#define uniq(v) (v).erase(unique(all(v)),(v).end())
#define fr first
#define sc second
#define vll vector <ll>
#define vpll vector < pair<ll,ll> >
#define vect(a,n) vll a(n); rep(i,0,n) cin>>a[i];
#define rep(i,a,b) for(ll i = a; i < b; i++)
#define PI 3.14159265358979323846
#define printall(a) rep(i,0,a.size()) cout<<a[i]<<" "; cout<<"\n";
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x,y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define deb3(x,y,z) cout << #x << "=" << x << "," << #y << "=" << y <<","<< #z << "=" << z << endl
const int mod = (ll) 1e9 + 7 ;
const int INF = (int) 1e18 ;
void fileio() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin) ;
freopen("output.txt", "w", stdout) ;
#endif
}
void solve() {
ld n;
cin >> n;
n = ceil(n * 1.08);
if(n < 206) {
cout << "Yay!";
} else if(n == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
int main() {
fastio;
fileio;
int t = 1;
while(t--) {
solve();
}
}
