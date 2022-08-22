#include<iostream>
using namespace std;
int main(void) {
int x, y, a, b;
cin >> x >> y;
a =(4*x-y) / 2;
b = (y - 2 * x) / 2;
if ((a + b) == x) {
cout << "Yes";
}
else {
cout << "No";
}
return 0;
}
