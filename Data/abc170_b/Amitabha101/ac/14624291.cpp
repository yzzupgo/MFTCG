#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int x, y;
cin >> x >> y;
if (((4 * x - y) / 2) >= 0 && ((float)(4 * x - y) / 2) == ((4 * x - y) / 2) && (x - (4 * x - y) / 2) >= 0)
{
cout << "Yes";
}
else
{
cout << "No";
}
return 0;
}
