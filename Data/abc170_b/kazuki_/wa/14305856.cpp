#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y, cnt = 0;
cin >> x >> y;
for (int i = 1; i <= x; i++){
int z;
z = (x - i) *2 + i * 4;
if(z == y) cnt++;
}
if (cnt > 0) cout << "YES";
else cout << "NO" ;
}
