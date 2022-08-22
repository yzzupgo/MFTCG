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
for (int i = 0; i < X; i++)
{
tmp = Y;
tmp -= (i + 1) * 2;
for (int j = 0; j < X - (i + 1); j++)
{
tmp -= (j + 1) * 4;
if (tmp == 0) {
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
}
