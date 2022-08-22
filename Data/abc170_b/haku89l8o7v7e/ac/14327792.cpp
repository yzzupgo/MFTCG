#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
puts((Y < 2 * X||4 * X < Y||Y % 2 != 0) ? "No" : "Yes");
}
