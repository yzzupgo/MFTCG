#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
if (Y % 2 != 0) {
cout << "No" << endl;
} else {
if ((X * 4) >= Y) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
}
return 0;
}
