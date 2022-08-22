#include <iostream>
using namespace std;
int main()
{
int x, y;
cin >> x >> y;
double crane, turtle;
if (x * 4 < y) {
cout << "No\n";
return 0;
}
crane = 2.0 * (double)x - ((double)y / 2.0);
turtle = ((double)y - (2.0 * (double)x)) / 2.0;
if (crane < 0 || turtle < 0 || (int)crane + (int)turtle != x) {
cout << "No\n";
}
else {
cout << "Yes\n";
}
return 0;
}
