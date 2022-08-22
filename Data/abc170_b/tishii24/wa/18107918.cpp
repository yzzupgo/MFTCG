#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <queue>
#include <stack>
#include <string>
#include <cmath>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < n; i++)
#define MOD 1000000007
const ll INF = 1ll << 60;
const int inf = 1 << 29;
int main()
{
int x, y;
cin >> x >> y;
rep(i, 25)
{
rep(j, 50)
{
if (i * 4 + j * 2 == y and i + j == x)
{
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}
