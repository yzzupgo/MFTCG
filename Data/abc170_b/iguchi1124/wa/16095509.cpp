#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int main() {
int x, y;
cin >> x >> y;
string ans = "No";
rep (i, x) {
if(i*4 + (x - i) * 2 == y) {
ans = "Yes";
break;
}
}
cout << ans << endl;
return 0;
}
