#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define rrep(i,k,n) for (int i = k; i < (int)(n); i++)
#define repd(i,n) for (int i = n-1; i >= 0; i--)
#define rrepd(i,k,n) for (int i = n-1; i >= (int)(k); i--)
#define all(x) (x).begin(),(x).end()
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
#define F first
#define S second
#define PB push_back
#define MP make_pair
using ll = long long;
using Vi = vector<int>;
using VVi = vector<Vi>;
using Vl = vector<ll>;
using VVl = vector<Vl>;
using Vb = vector<bool>;
using VVb = vector<Vb>;
using P = pair<int,int>;
using Pll = pair<ll, ll>;
const ll mod = 1000000007;
const ll inf = 1000000000000;
int main() {
ll n,m;
cin >> n >> m;
ll mi=1,mx=n;
rep(i,n){
ll x,y;
cin >> x >> y;
chmax(mi,x);chmin(mx,y);
}
ll ans=max((ll)0,mx-mi+1);
cout << ans << endl;
}
