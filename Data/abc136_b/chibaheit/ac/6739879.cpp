#include <bits/stdc++.h>
#define inf 0x3f3f3f3f
using namespace std;
typedef long long ll;
int i, j;
string s;
int n;
ll dp[100001][13] = {0};
const ll mod = 1e9 + 7;
void solve() {
int n;
cin >> n;
string s(to_string(n));
int res = 0;
int len = s.size();
if (len % 2 == 1) {
res += n - (int)pow(10, len - 1) + 1;
len -= 2;
} else {
len -= 1;
}
while (len > 0) {
res += 9 * (int)pow(10, len - 1);
len -= 2;
}
cout << res << endl;
return;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
solve();
return 0;
}
