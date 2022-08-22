#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
int main()
{
int x, y;
cin >> x >> y;
int a = 0, B = 0;
B = y - 2 * x;
if (B < 0 || B % 2 != 0)
{
cout << "No" << endl;
return 0;
}
a = x - B / 2;
if (a >= 0)
cout << "Yes" << endl;
else
cout << "No" << endl;
return 0;
}
