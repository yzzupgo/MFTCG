#include <bits/stdc++.h>
#define int long long int
#define Hiraishin \
ios_base::sync_with_stdio(false); \
cin.tie(nullptr); \
cout.tie(nullptr);
using namespace std;
void solve() {
int x, y;
cin >> x >> y;
bool f = false;
for(int i = 0; i <= x; i++){
int j = x - i;
if(2 * i + 4 * j == y)
{
f = true; break;
}
}
cout << (f ? "Yes\n" : "No\n");
}
signed main() {
Hiraishin
solve();
return 0;
}
