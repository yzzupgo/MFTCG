#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
template <class T> using V = vector<T>;
using ll = long long;
using db = double;
using st = string;
using ch = char;
using vll = V<ll>;
using vpll =V<pair<ll,ll>>;
using vst = V<st>;
using vdb = V<db>;
using vch = V<ch>;
#define FOR(i,a,b) for(ll i=(a);i<(ll)(b);i++)
#define rFOR(i,a,b) for(ll i=(b);i>(ll)(a);i--)
#define oFOR(i,a,b) for(ll i=(a);i<(ll)(b);i+=2)
#define bgn begin()
#define en end()
#define SORT(a) sort((a).bgn,(a).en)
#define REV(a) reverse((a).bgn,(a).en)
#define M(a,b) max(a,b)
#define rM(a,b) min(a,b)
#define fi first
#define se second
#define sz size()
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) __lcm(a,b)
#define co(a) cout<<a<<endl;
#define ci(a) cin>>a;
int main() {
ll a,b;
ci(a>>b);
if(a>=13){
co(b)
}
else if(6<=a&&a<=12){
co(b/2)
}
else{
co(0)
}
}
