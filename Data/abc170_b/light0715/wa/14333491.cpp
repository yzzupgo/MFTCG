#include <bits/stdc++.h>
#define rep(i,n) for (int i=0; i<=n; i++)
using namespace std;
using ll = long long;
int main() {
int x, y;
cin >> x >> y;
bool conb = false;
rep(i,x) {
rep(j,x) {
if (i+j==x && (2*i+4*j)==y) conb = true;
}
}
if (conb) cout << "YES" <<endl;
else cout << "NO" << endl;
return 0;
}
