#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
for (int i = 0; i <= x; i++)
{
int j = x - i;
int res = i * 2 + j * 4;
if (res == y)
{
cout << "Yes";
return 0;
}
}
cout << "No";
return 0;
}
