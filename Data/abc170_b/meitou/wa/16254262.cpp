#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <ctype.h>
#include <stdlib.h>
#include <map>
using namespace std;
int main()
{
int X, Y;
cin >> X >> Y;
int tmp = 0;
for (int i = 1; i <= X; i++)
{
int tmp = 2 * i + 4 * (X - i);
if (tmp == Y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
