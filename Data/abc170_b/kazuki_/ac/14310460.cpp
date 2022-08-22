#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y, cnt = 0;
cin >> x >> y;
for (int i = 0; i <= x; i++){
int z;
z = (x - i) * 2 + i * 4;
if(z == y) cnt++;
}
if (cnt > 0) cout << "Yes";
else cout << "No" ;
}
