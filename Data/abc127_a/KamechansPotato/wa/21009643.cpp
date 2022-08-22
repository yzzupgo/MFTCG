#include <iostream>
using namespace std;
int main(void)
{
int a, b;
cin >> a >> b;
if (a == 0) {
cout << 0 << endl;
}
else if (a <= 12 && a >= 5) {
cout << b / 2 << endl;
}
else {
cout << b << endl;
}
}
