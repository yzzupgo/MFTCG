#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y; cin >> x >> y;
for (int i = 0; x - i >= 0; i++) {
int r1 = (x - i) * 2;
int r2 = i * 4;
if(i == 0 and (r1 == y or r2 == y )) {
cout << "Yes\n";
return 0;
}
if(r1 + r2 == y) {
cout << "Yes\n";
return 0;
}
}
cout << "No\n";
return 0;
}
