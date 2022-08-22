#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int main()
{
int x, y; cin >> x >> y;
int start = x * 2;
if (y >= x * 2 && y <= (x * 4))
cout << "Yes\n";
else
cout << "No\n";
}
