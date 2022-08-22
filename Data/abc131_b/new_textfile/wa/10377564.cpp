#include "bits/stdc++.h"
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
typedef pair<P,ll> Pll;
typedef pair<P,P> PP;
#define rep(i,a,n) for(ll i = a;i < n;i++)
#define repr(i,a,n) for(ll i = n-1;i >= a;i--)
#define LINF (ll)1e17
#define INF (int)1e9
#define MOD (ll)1e9+7
#define sMOD 1e5
#define fs first
#define sc second
ll gcd(ll a,ll b){
if(!b) return a;
return gcd(b,a%b);
}
signed main(){
ll l,n,memo = LINF,sum = 0;
cin >> n >> l;
rep(i,0,n){
sum += l+i;
memo = min(memo,l+i);
}
cout << sum - memo << endl;
return 0;
}
