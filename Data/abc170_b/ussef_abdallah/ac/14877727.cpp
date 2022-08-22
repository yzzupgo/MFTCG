#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
cin.tie(0);
ios_base::sync_with_stdio(0);
int x, y;
cin >> x >> y;
if ((y - 2 * x) % 2 == 0) {
int b = (y - 2 * x) / 2;
int a = x - b;
if (a >= 0 && b >= 0 && a + b == x && 2 * a + 4 * b == y) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
} else {
cout << "No" << endl;
}
return 0;
}
