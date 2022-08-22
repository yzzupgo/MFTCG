#include <bits/stdc++.h>
using namespace ::std;
int main() {
int x, y;
cin >> x >> y;
int max = x * 4;
int min = x * 2;
if ((y <= max && y >= min) && (y%2==0 || y % 4 == 0 || y % 6 == 0)) {
cout << "Yes" << '\n';
return 0;
}
cout << "No" << '\n';
return 0;
}
