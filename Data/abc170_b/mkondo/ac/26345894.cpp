#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>
#include <bitset>
#include <fstream>
using namespace std;
int main()
{
int x, y;
cin >> x >> y;
for (int i = 0; i <= x; i++)
{
int j = x - i;
if (i * 2 + j * 4 == y)
{
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
