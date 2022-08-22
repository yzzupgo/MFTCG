#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
for (int i = 1; i <= x; i++)
if (y >= i * 2 && ((y - i * 2) % 4 ==0)) {
cout << "Yes";
return 0;
}
cout << "No";
}
