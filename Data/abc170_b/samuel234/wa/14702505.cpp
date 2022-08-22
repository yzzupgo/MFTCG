#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
double a = 2 * x - y / 2;
double b = y / 2 - x;
if (a < 0 || b < 0) {
cout << "No" << endl;
}
else {
cout << "Yes" << endl;
}
}
