#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;
int main() {
int X = 0;
int Y = 0;
cin >> X >> Y;
for (int i = 0; i < X; i++) {
for (int j = 0; j < X; j++) {
if ((2 * i + 4 * j) == Y) {
if ((i + j) == X) {
cout << "Yes" << endl;
return 0;
}
}
}
}
cout << "No";
return 0;
}
