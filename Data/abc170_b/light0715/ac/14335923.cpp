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
int sum = 2*i+4*j;
if ((i+j==x) && (sum==y)) conb = true;
}
}
if (conb) cout << "Yes" <<endl;
else cout << "No" << endl;
return 0;
}
