#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
for (int i = 0; i <= x; i++)
if ((i * 2 + (x - i) * 4) == y) {
cout << "Yes";
return 0;
}
cout << "No";
}
