#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i,n) for (ll i = 0; i < (ll)(n); i++)
#define repx(i,x,n) for (ll i = (ll)(x); i < (ll)(n); i++)
#define repr(i,n) for (ll i = ((ll)(n)-1); i >= 0; i--)
#define reprx(i,x,n) for (ll i = ((ll)(n)-1); i >= (ll)(x); i--)
#define all(x) (x).begin(),(x).end()
#define sz(x) ((ll)(x).size())
#define submit(x) {cout<<x<<endl; return 0;}
#define X first
#define Y second
template<class T> using V = vector<T>;
template<class T> using VV = V<V<T>>;
template<class T>bool chmax(T &a,T b) {if (a<b) {a=b; return 1;} return 0;}
template<class T>bool chmin(T &a,T b) {if (b<a) {a=b; return 1;} return 0;}
template<class T>long long square(T a) {return a*a;}
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 1LL << 60;
int main()
{
ll x,y;
cin>>x>>y;
ll legs = x*2;
rep(i, x)
{
if (legs>=y) break;
legs += 2;
}
cout<<(legs==y ? "Yes" : "No")<<endl;
}
