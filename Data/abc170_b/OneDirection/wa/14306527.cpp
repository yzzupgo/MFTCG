#include <iostream>
#include <vector>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
int a, b;
int val = y - 2 * x;
if (val >= 0 && ((val % 2) == 0))
cout << "Yes" << endl;
else
cout << "No" << endl;
return 0;
}
