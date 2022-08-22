#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
cout << (4*X-Y >= 0 && Y-2*X >= 0 && (4*X-Y)%2 == 0 && (Y-2*X)%2 == 0 ? "Yes" : "No") << endl;
}
