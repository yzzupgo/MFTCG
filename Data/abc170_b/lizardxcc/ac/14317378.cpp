#include <bits/stdc++.h>
using namespace std;
int main(void)
{
int x, y;
cin >> x >> y;
if ((4*x-y) >= 0 && (4*x-y) <= 2*x && (4*x-y)%2 == 0)
cout << "Yes" << endl;
else
cout << "No" << endl;
return 0;
}
