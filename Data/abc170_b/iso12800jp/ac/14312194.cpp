#include <iostream>
#include <string>
using namespace std;
#define yes "Yes"
#define no "No"
int main()
{
int x, y, i, j, k;
cin >> x;
cin >> y;
for (size_t i = 0; i < x + 1; i++)
{
if ((i * 2) + ((x - i) * 4) == y)
{
cout << yes << endl;
return 0;
}
}
cout << no << endl;
}
