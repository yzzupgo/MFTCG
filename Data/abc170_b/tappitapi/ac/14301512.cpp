#include <iostream>
#include <iomanip>
#include <string>
#include <unordered_map>
#include <cmath>
#include <algorithm>
typedef long long ll;
typedef long double ld;
using namespace std;
int main()
{
int x, y;
cin >> x >> y;
for (int i = 0; i <= x; ++i)
{
for (int j = 0; j <= x; ++j)
{
if ((i * 4 + j * 2 == y) && (j + i == x))
{
cout << "Yes";
return 0;
}
}
}
cout << "No";
return 0;
}
