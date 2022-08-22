#include <iostream>
using namespace std;
int main()
{
int x, y;
cin >> x >> y;
if (y > x * 4)
cout << "No";
else if ((x * 4 - y) % 2)
cout << "No";
else
cout << "Yes";
cout << endl;
return 0;
}
