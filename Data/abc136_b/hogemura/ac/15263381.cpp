#define rep(i,n) for (int i = 0; i < (n); i++)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int MOD = 1000000007;
int main() {
int N;
cin >> N;
int ans = 0;
for (int i = 1; i <= N; i++) {
string strI = to_string(i);
int length = strI.size();
if (length % 2 == 1) {
ans++;
}
}
cout << ans << endl;
return 0;
}
