#include <iostream>
#include <cstdlib>
#include <list>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(void)
{
int X, Y;
cin >> X >> Y;
for (int i = 0; i <= X; ++i)
{
if (2*i + 4*(X-i) == Y) {
cout << "Yes";
return 0;
}
}
cout << "No";
return 0;
}
