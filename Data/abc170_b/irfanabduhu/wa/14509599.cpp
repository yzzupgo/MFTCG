#include <iostream>
using namespace std;
int main(void) {
int x, y;
cin >> x >> y;
bool possible = (y % 2 == 0);
y -= x * 2;
possible &= (y <= 2 * x);
if (possible)
cout << "Yes\n";
else
cout << "No\n";
}
