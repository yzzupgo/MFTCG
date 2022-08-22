#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,a,n) for(ll i = a;i < n;i++)
#define rrep(i,a,n) for(ll i = n; i >= a;i--)
#define index_check(i,n) if(i > n-1 || i < 0) continue;
#define LINF 1e18
#define INF 1e9
using namespace std;
#define fs first
#define sc second
using P = pair<ll,ll>;
using Pll = pair<P,ll>;
using PQ = priority_queue<P,vector<P>,greater<P>>;
const ll MOD = 1e9+7;
signed main(){
ll x,y;
cin >> x >> y;
rep(i,0,1000){
if(i >= x) break;
if(2*(x-i)+4*i == y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
