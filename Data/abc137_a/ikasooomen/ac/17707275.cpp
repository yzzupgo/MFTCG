#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <stack>
#include <numeric>
#include <bitset>
#include <math.h>
#include <iomanip>
#include <sstream>
#include <cstdlib>
#include <stdio.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0;i<(ll)(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=(ll)(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=(ll)(b);i--)
#define ALL(x) (x).begin(),(x).end()
#define SIZE(x) ((ll)(x).size())
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
#define INF 1000000000000
#define MOD 1000000007
#define MAXR 100000
#define PI 3.14159265359
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define C(x) cout << x << endl
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
ll cbn(ll n, ll k) {
ll r = 1;
for (ll d = 1; d <= k; ++d) {
r *= n--;
r /= d;
}
return r;
}
ll powmod(ll a, ll n) {
ll res = 1;
while (n > 0) {
if (n & 1) res = res * a % MOD;
a = a * a % MOD;
n >>= 1;
}
return res;
}
int gcb(int a, int b){
if(a < b){
int x = a;
a = b;
b = x;
}
int amari = a % b;
if(amari == 0) return b;
return gcb(b, amari);
}
int gcb_3(int a, int b, int c){
return gcb(gcb(a, b), c);
}
int main() {
cin.tie(0);
ios::sync_with_stdio(false);
ll a,b; cin>>a>>b;
cout<<max(a+b,max(a-b,a*b));
}
