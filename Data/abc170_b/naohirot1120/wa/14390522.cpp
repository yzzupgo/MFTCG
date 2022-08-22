#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
const int INF = 1e9;
int main() {
ll x, y, ans = 0;
cin >> x >> y;
cout << (2 * x <= y && y <= 4 * x ? "Yes" : "No") << endl;
return 0;
}
