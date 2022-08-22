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
if (2 * x <= y && 4 * x >= y)
cout << "Yes" << endl;
else
cout << "No" << endl;
}
int main()
{
solve();
return 0;
}
