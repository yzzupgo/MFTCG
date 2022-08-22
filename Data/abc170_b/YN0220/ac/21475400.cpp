#include <iostream>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <complex>
#include <stack>
#include <queue>
#include <unordered_map>
#include <map>
using namespace std;
int main()
{
int X = 0;
int Y = 0;
cin >> X >> Y;
bool f=false;
for (int i = 0; i < X+1; i++)
{
if (((2 * i) + 4 * (X - i)) == Y)
{
f = true;
}
}
if (f)
{
cout << "Yes";
}
else {
cout << "No";
}
return 0;
}
