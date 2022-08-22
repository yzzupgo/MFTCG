#include <iostream>
using namespace std;
int main()
{
int x, y;
cin >> x >> y;
if(y % 2 == 1)
return cout << "No", 0;
bool OK = 0;
for(int i = 1; i <= x && 2 * i <= y && !OK; ++i)
if((2 * i) + ((x - i) * 4) == y)
OK = 1;
cout << (OK ? "Yes" : "No");
return 0;
}
