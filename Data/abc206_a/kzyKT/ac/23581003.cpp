#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define R cin>>
#define ll long long
#define ln cout<<'\n'
#define in(a) insert(a)
#define pb(a) push_back(a)
#define pd(a) printf("%.10f\n",a)
#define mem(a) memset(a,0,sizeof(a))
#define all(c) (c).begin(),(c).end()
#define iter(c) __typeof((c).begin())
#define rrep(i,n) for(ll i=(ll)(n)-1;i>=0;i--)
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
#define tr(it,c) for(iter(c) it=(c).begin();it!=(c).end();it++)
ll check(ll n, ll m, ll x, ll y) {
return x >= 0 && x < n && y >= 0 && y < m;
}
void pr() {
ln;
}
template<class A, class...B>void pr(const A &a, const B &...b) {
cout << a << (sizeof...(b) ? " " : "");
pr(b...);
}
template<class A>void PR(A a, ll n) {
rep(i, n)cout << (i ? " " : "") << a[i];
ln;
}
const ll MAX = 1e9 + 7, MAXL = 1LL << 61, dx[8] = {-1, 0, 1, 0, -1, -1, 1, 1}, dy[8] = {0, 1, 0, -1, -1, 1, 1, -1};
typedef pair<ll, ll> P;
void Main() {
ll n;
R n;
ll x = 1.08 * n;
if(x < 206) {
pr("Yay!");
} else if(x > 206) {
pr(":(");
} else {
pr("so-so");
}
}
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
Main();
return 0;
}
