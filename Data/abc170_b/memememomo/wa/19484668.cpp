#include <iostream>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
for (int x=1; x<=X; x++) {
int y = X - x;
if (Y == x*2+y*4) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
