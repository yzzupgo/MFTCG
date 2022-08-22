#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265
ll mod = 1000000007;
ll z = 1000000000;
const ll N = 1e9 + 1;
const ll INF = 1e18;
#define mp make_pair
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(x) (x).begin(),(x).end()
#define uniq(v) (v).erase(unique(all(v)),(v).end())
#define sz(x) (ll)((x).size())
#define fr first
#define sc second
#define pii pair<ll,ll>
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define vp vector<pair<ll,ll>>
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repr(i,a,b) for(ll i=b-1;i>=a;i--)
#define mem1(a) memset(a,-1,sizeof(a))
#define mem0(a) memset(a,0,sizeof(a))
#define ppc __builtin_popcount
#define ppcll __builtin_popcountll
template<typename T, typename T1>T amax(T &a, T1 b) {
if(b > a) {
a = b;
}
return a;
}
template<typename T, typename T1>T amin(T &a, T1 b) {
if(b < a) {
a = b;
}
return a;
}
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
ll t, n, m;
void solve() {
float x ;
cin >> x;
x = x * 1.08;
n = (ll)(x);
if(n > 206) {
cout << ":(" << endl;
} else if(n < 206) {
cout << "yay!" << endl;
} else {
cout << "so-so" << endl;
}
}
int main() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
t = 1;
while(t--) {
solve();
}
}
