#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using namespace std;
int main() {
int a, b, ans;
cin >> a >> b;
if (a >= 13) ans = b;
else if (a <= 5) ans = 0;
else ans = b / 2;
cout << ans << endl;
}
