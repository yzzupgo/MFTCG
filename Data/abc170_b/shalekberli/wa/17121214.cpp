#include <iostream>
using namespace std;
int x, y, cnt = 0;
int main()
{
cin >> x >> y;
while(y - 4 >= 0 && x >= 0)
{
y -= 4; cnt++;
}
x -= cnt;
y -= 2 * x;
cout << (y == 0 ? "Yes" : "No");
return 0;
}
