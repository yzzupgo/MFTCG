#include <bits/stdc++.h>
using namespace std;
int main()
{
int a, b;
cin >> a >> b;
if (a >= 13)
cout << b;
else if (a == 0)
cout << 0;
else if (a < 13)
cout << b / 2;
}
