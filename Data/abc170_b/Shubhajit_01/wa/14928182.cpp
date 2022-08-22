#include<bits/stdc++.h>
using namespace std;
int main() {
ios::sync_with_stdio(false);
cin.tie(0);
int x, y;
cin >> x >> y;
for (int i = 0; i <= (y >> 1); ++i) {
if (2 * i + 4 * (x - i) == y) {
cout << "YES";
return 0;
}
}
cout << "NO";
return 0;
}
