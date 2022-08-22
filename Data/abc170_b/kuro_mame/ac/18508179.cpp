#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
int X,Y;
cin >> X >> Y;
for (int i = 0; i <= X; ++i) {
for (int j = 0; j <= X; ++j) {
int crane = i * 2;
int turtle = j * 4;
if (i + j == X && crane + turtle == Y) {
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}
