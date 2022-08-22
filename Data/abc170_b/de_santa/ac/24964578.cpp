#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int x, y;
cin >> x >> y;
if(((4 * x - y ) % 2 == 0 and y <= 4 * x) and ((y - 2 * x) % 2 == 0) and 2 * x <= y)
cout << "Yes";
else
cout << "No";
}
