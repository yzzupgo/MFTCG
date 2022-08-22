#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;
int main() {
int X, Y;
cin >> X >> Y;
int a, b;
if ((Y - 2 * X)% 2 != 0) {
cout << "No" << endl;
return 0;
}
b = (Y - 2 * X)/2;
a = X - b;
if ((a < 0)||(X < a)) {
cout << "No" << endl;
return 0;
}
if ((b < 0)||(X < b)) {
cout << "No" << endl;
return 0;
}
cout << "Yes" << endl;
return 0;
}
