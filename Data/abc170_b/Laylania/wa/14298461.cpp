#include<bits/stdc++.h>
using namespace std;
int main(void) {
int X, Y;
cin >> X >> Y;
int c = 2 * X - (Y / 2);
int t = (Y / 2) - X;
if (c < 0 || t < 0) {
cout << "NO" << endl;
} else {
cout << "YES" << endl;
}
}
