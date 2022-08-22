#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pi 3.14159265359
#define inf 2147483647
#define INF 9223372036854775807
#define mod 1000000007
#define mod2 998244353
#define Graph vector<vector<int>>
int main() {
int X, Y; cin >> X >> Y;
int turu = X, kame = 0;
string ans = "No";
for (int i = 0; i < X; i++) {
if (2 * turu + 4 * kame == Y) {
ans = "Yes";
break;
}
turu--;
kame++;
}
cout << ans << endl;
return 0;
}
