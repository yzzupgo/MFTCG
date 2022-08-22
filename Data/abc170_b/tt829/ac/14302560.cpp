#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int,int>;
int main() {
int x, y;
cin >> x >> y;
int b = y - 2 * x;
if (b < 0 || b % 2 != 0) {
cout << "No" << endl;
}
else {
b /= 2;
int a = x - b;
if (a < 0 || 100 < a)
cout << "No" << endl;
else
cout << "Yes" << endl;
}
return 0;
}
