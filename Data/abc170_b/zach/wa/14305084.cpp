#include <iostream>
using namespace std;
int main()
{
int X, Y;
cin >> X >> Y;
int ak = X * 4;
if (ak < Y) {
cout << "No";
}
else {
cout << (((ak - Y) % 2 == 0) ? "Yes" : "No");
}
return 0;
}
