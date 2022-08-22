#include <iostream>
#include <vector>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
if (4 * X - Y >= 0) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
return 0;
}
