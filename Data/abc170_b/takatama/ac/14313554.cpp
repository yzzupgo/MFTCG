#include <iostream>
#include <vector>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
int t = (4 * X - Y);
int k = (Y - 2 * X);
if (t >= 0 && t % 2 == 0 && k >= 0 && k % 2 == 0) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
return 0;
}
