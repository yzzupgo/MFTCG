#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)n; ++i)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;
const ll INF = 1LL<<60;
int main() {
int a, b; cin >> a >> b;
int ans = a + b;
ans = (ans, a - b);
ans = (ans , a * b);
cout << ans << endl;
return 0;
}
