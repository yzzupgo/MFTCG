#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
int X, Y;
cin >> X >> Y;
ll a,b;
b = (Y - 2*X) / 2.0;
a = 2*X - Y/2.0;
bool a_cond = (1 <= a && a <= 100);
bool b_cond = (1 <= b && b <= 100);
if (a % 1 == 0 && b % 1 == 0 && a_cond && b_cond) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
return 0;
}
