#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using namespace std;
int main() {
int x, y, cnt = 0;
cin >> x >> y;
rep(i, x) {
int z;
z = (x - i) *2 + i * 4;
if(z == y) cnt++;
}
if (cnt > 0) cout << "YES";
else cout << "NO" ;
}
