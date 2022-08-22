#include<bits/stdc++.h>
#define int long long
using namespace std;
int ans(int n) {
int x = to_string(n).size();
int m = pow(10, x - 1);
if (x == 1)return n;
else if (x % 2) {
return n - m + 1 + ans(m - 1);
}
else return ans(m - 1);
}
signed main() {
int n;
cin >> n;
cout << ans(n) << endl;
}
