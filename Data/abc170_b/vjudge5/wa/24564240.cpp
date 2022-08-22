#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y; cin >> x >> y;
while(x--) {
if(y > 4) y -= 4;
else if(x >= 0 and y == 4) y -= 4;
else if(y >= 2) y -= 2;
}
cout << (x == 0 and y == 0 ? "Yes\n" : "No\n");
return 0;
}
