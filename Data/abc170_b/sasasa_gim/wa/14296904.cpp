#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
int X, Y;
cin >> X >> Y;
if (2 * X <= Y && Y <= 4 * X) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
return 0;
}
