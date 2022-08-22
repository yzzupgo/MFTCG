#include <bits/stdc++.h>
#define rep(i,n) for (int i=0; i<(int)(n); i++)
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int main() {
int x,y; cin >> x >> y;
string ans = "No";
rep(i,x+1) {
int sum = 0;
rep(j,x+1) {
sum += i * 2;
sum += j * 4;
if (sum == y) ans = "Yes";
}
}
cout << ans << endl;
}
