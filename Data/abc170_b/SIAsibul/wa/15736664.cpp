#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ll, int> pli;
typedef pair<int, ll> pil;
typedef vector<pii> vii;
typedef vector<pil> vil;
typedef vector<pli> vli;
typedef vector<pll> vll;
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define sz size()
#define all(a) a.begin(), a.end()
#define mem(a,b) memset(a, b, sizeof(a))
#define f0(i,n) for(ll i=0;i<(n);i++)
#define f1(i,n) for(ll i=1;i<=(n);i++)
#define f2(i,a,n) for(ll i=(a);i<=(n);i++)
#define fr(i,n,a) for(ll i=(n);i>=(a);i--)
#define rep(i,a,b,c) for(ll i=(a);i!=(b);i+=(c))
#define nl "\n"
const int INF = 1e9 + 5;
const int MXN = 2e5 + 5;
const int MOD = 1e9 + 7;
void solve(){
int x, y; cin >> x >> y;
if(4*x < y) cout << "No\n";
else if(y!=1){
if(y%2 == 0) cout << "Yes\n";
else cout << "No\n";
}else cout << "No" << nl;
}
int main(){
ll t;
t = 1;
while(t--){
solve();
}
return 0;
}
