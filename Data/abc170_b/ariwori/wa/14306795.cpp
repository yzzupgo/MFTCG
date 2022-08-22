#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
using namespace std;
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
template<class T>using numr=std::numeric_limits<T>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
const int INF = 1e9;
const ll LLINF = 1e16;
const int MOD = 1000000007;
const int MOD2 = 998244353;
int main() {
ios::sync_with_stdio(false);cin.tie(0);
int x,y;
cin >> x >> y;
for(int i=0;i<=x;i++){
for(int j=0;j<=x-i;j++){
if(2*i+4*j==y) {
cout << "Yes"<<endl;
return 0;
}
}
}
cout << "No" <<endl;
}
