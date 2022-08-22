#include <stdio.h>
#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
#include <cstdlib>
#include <string>
#include <math.h>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <bitset>
#include <tuple>
#include <climits>
#include <sstream>
using namespace std;
static const unsigned long long int MOD = 1000000007LL;
int main()
{
int n, l, res = 0, eat = 1000000;
cin >> n >> l;
for (int i = 1; i <= n; i++)
{
int tmp = l + i - 1;
res += tmp;
if (abs(tmp) < abs(eat))
{
eat = tmp;
}
}
cout << res - eat;
return 0;
}
