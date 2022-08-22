#include <bits/stdc++.h>
#define rep(i,n) for (ll i = 0; i < n; ++i)
typedef long long ll;
using namespace std;
const int INF = 1e9;
int main() {
int x, y;
cin >> x >> y;
bool flag = false;
for (int i = 0; i <= x; ++i) {
int j = x - i;
if (i * 2 + j * 4 == y)
flag = true;
}
flag ? cout << "Yes" : cout << "No";
cout << endl;
return 0;
}
