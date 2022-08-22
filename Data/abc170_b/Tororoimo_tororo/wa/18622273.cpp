#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
bool result = false;
cin >> x >> y;
for (int i = 1; i <= x; i++)
{
if (2 * i + 4 * (x - i) == y)
{
result = true;
break;
}
}
if (result)
{
cout << "Yes" << endl;
}else
{
cout << "No" << endl;
}
return 0;
}
