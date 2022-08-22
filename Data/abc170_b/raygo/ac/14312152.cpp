#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const long long MOD_NUMBER = 1000000007;
const double PI = 3.14159265358979323846;
int main() {
ll x, y;
cin >> x >> y;
if (4 * x < y || y % 2 || y < 2 * x) {
cout << "No" << endl;
} else {
cout << "Yes" << endl;
}
}
