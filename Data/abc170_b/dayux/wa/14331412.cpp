#include <bits/stdc++.h>
using namespace std;
int main()
{
int x, y;
cin >> x >> y;
if (y & 1 || y > (x << 2))
{
puts("No");
}
else
{
puts("Yes");
}
return 0;
}
