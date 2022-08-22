#include <iostream>
#include <math.h>
using namespace std;
int main(){
double X, Y, a, b;
cin >> X >> Y;
a = (X * 4.0 - Y)/2.0;
b = fmod(a, 1.0);
if (4.0 * X < Y) {
cout << "No" << endl;
}
else if (2.0 * X > Y) {
cout << "No" << endl;
}
else if (2.0 * X <= Y || 4.0 * X >= Y || b == 0.0) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
}
