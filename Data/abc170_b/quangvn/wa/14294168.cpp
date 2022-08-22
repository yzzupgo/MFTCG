#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<ll> vl;
typedef pair<ll, ll> pll;
#define St first
#define Nd second
#define Pb push_back
#define print_pair(p) cout<<p.St<<" "<<p.Nd
#define endl "\n"
#define REP(i,a,b) for(int i = a; i <= b; i++)
#define REV(i,a,b) for(int i = a; i >= b; i--)
#define AritSum(a,d,n) ((n)*(2*(a)+((n)-1)*(d)))/2
#define Log(base,num) log2(num)/log2(base)
#define MOD 1000000007
ll binpow(ll x, ll y) {
ll z = 1;
while(y > 0) {
if(y % 2 == 1)
z = (z*x)%MOD;
x = (x*x)%MOD;
y /= 2;
}
return z;
}
ll inv(ll x) {return binpow(x, MOD - 2);}
ll divide(ll x, ll y) {return x* inv(y);}
void solve() {
int X, Y;cin>> X>>Y;
int b2 = Y - 2*X;
if ((b2&1) || b2 < 0 || X < b2/2) {
cout << "NO" << endl;
return;
}
cout << "YES" << endl;
}
int main() {
int _=1;
REP(t,1,_) {
solve();
}
return 0;
}
