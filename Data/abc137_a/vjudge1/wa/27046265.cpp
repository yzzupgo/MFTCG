#include <iostream>
using namespace std;
int main()
{
int A, B;
cin >> A >> B;
int x = A + B;
int y = A-B;
int z = A*B;
if (x > y && x>z) {
cout << x;
} else if (y>x && y>z) {
cout << y;
} else { cout << z;
}
}
