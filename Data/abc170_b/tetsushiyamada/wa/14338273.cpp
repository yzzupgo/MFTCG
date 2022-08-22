#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
if ((Y % 2 == 0) && ((2*X >= Y / 2) || (X == Y/2) || (X==Y/4))) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
return 0;
}
