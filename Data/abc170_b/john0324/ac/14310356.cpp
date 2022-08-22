#include <iostream>
using namespace std;
int main(void) {
int X, Y;
cin >> X >> Y;
int Crane = 2 * X - 0.5 * Y;
int Turtle = - 1 * X + 0.5 * Y;
if (Crane + Turtle == X && Crane >= 0 && Turtle >= 0) cout << "Yes";
else cout << "No";
return 0;
}
