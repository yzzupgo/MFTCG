#include <iostream>
using namespace std;
int main()
{
int x, y;
cin >> x >> y;
double crane, turtle;
turtle = 2.0 * (double)x - ((double)y / 2.0);
crane = ((double)y - (2.0 * (double)x)) / 2.0;
if (crane < 0 || turtle < 0) {
cout << "No\n";
}
else {
cout << "Yes\n";
}
return 0;
}
