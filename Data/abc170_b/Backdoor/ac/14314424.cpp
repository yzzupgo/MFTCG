#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <unordered_map>
#include <string>
#include <cstring>
using namespace std;
typedef long long ll;
void solve()
{
int x, y;
cin >> x >> y;
int b = y / 2 - x;
if ((y - 2 * x) % 2 == 0 && b >= 0 && b <= x)
cout << "Yes" << endl;
else
cout << "No" << endl;
}
int main()
{
solve();
return 0;
}
