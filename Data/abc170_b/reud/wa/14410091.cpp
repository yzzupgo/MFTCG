#include <bits/stdc++.h>
#define INF 1e9
using namespace std;
#define REPR(i,n) for(int i=(n); i >= 0; --i)
#define FOR(i,m,n) for(int i = (m); i < (n); ++i)
#define REP(i,n) for(int i=0, i ##_len=(n); i<i ##_len; ++i)
#define ALL(a) (a).begin(),(a).end()
#define endl "\n"
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return true; } return false; }
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return true; } return false; }
typedef long long ll;
void solve() {
int X,Y;
cin >> X >> Y;
auto ty = Y*2 - X;
if(ty%2 == 1) {
cout << "No" << endl;
return;
}
auto y = ty/2;
auto x = y - X;
if (x < 0 || y < 0 ) {
cout << "No" << endl;
return;
}
cout << "Yes" << endl;
}
int main() {
solve();
return 0;
}
