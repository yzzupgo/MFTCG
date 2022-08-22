#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int a, b;
cin >> a >> b;
if (b > 0) {
cout << ((2*b + a - 1) * a / 2) - b << endl;
}
else if (a + b - 1 < 0) {
cout << ((2*b + a - 1) * a / 2) - (a + b - 1) << endl;
}
else {
cout << (2*b+a-1)*a/2 << endl;
}
}
