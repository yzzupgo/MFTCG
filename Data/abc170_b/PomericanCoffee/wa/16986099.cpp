#include <bits/stdc++.h>
using namespace std;
int main()
{
int X, Y;
bool flag = false;
cin >> X >> Y;
for (int i = 0; i <= X; i++) {
if ((Y - 2 * i) / 4 == X - i)
flag = true;
}
cout << (flag ? "Yes" : "No") << endl;
}
