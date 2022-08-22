#include <iostream>
using namespace std;
int main()
{
int a, b,X,Y;
cin >> X >> Y;
if (Y > 4 * X || Y < 2 * X || Y % 2 == 1) cout << "No" << endl;
else cout << "Yes" << endl;
}
