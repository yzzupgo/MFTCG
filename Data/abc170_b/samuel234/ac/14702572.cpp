#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
double a = 2 * x - (double)y / 2;
double b = (double)y / 2 - x;
if (a < 0 || b < 0 || a - floor(a) > 0 || b - floor(b) > 0) {
cout << "No" << endl;
}
else {
cout << "Yes" << endl;
}
}
