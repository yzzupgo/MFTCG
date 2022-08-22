#include <bits/stdc++.h>
#define REP(i,n) for (int i = 0; i < n; ++i)
#define FOR(i,b,n) for (int i = b; i < n; ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const string YES = "Yes";
const string NO = "No";
void solve(ll X, ll Y) {
ll B = Y - 2 * X;
ll A = X - B;
if (A >= 0 && B >= 0)
cout << YES << endl;
else
cout << NO << endl;
}
int main(){
cin.tie(0);
ios::sync_with_stdio(false);
ll X;
cin >> X;
ll Y;
cin >> Y;
solve(X, Y);
return 0;
}
