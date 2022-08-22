#include <bits/stdc++.h>
#include<algorithm>
#include<math.h>
#include<string>
#include<iostream>
#include <vector>
#include <cstdlib>
using namespace std;
template <class T> using V = vector<T>;
template<class T> inline bool chmin(T& a, T b) {
if (a > b) {
a = b;
return true;
}
return false;
}
template<class T> inline bool chmax(T& a, T b) {
if (a < b) {
a = b;
return true;
}
return false;
}
const long long INF = 1LL << 60;
using ll = long long;
using db = double;
using st = string;
using ch = char;
using bl = bool;
using vll = V<ll>;
using vpll =V<pair<ll,ll>>;
using vst = V<st>;
using vdb = V<db>;
using vch = V<ch>;
using vbl = V<bl>;
#define FOR(i,a,b) for(ll i=(a);i<(b);i++)
#define rFOR(i,a,b) for(ll i=(a);i>(b);i--)
#define oFOR(i,a,b) for(ll i=(a);i<(b);i+=2)
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
#define co(a) cout<<a<<endl;
#define ci(a) cin>>a;
ll sum(ll n) {
ll m=0;
FOR(i,0,20){
m+=n%10;
n/=10;
if(n==0){
break;
}
}
return m;
}
ll combi(ll n,ll m) {
ll ans=1;
rFOR(i,n,n-m){
ans*=i;
}
FOR(i,1,m+1){
ans/=i;
}
return ans;
}
ll lcm(ll a,ll b){
ll n;
n=a/gcd(a,b)*b;
return n;
}
signed main() {
ll n,l;
ci(n>>l);
vll A(n);
ll pi=0;
FOR(i,0,n){
A[i]=i+l;
pi+=A[i];
}
if(0<=l) co(pi-A[0])
else if(l<=-n) co(pi-A[n-1])
else co(pi)
}
