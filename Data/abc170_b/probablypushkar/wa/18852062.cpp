#include <algorithm>
#include <iostream>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <iomanip>
#include <numeric>
#include <tuple>
#include <bitset>
#include <complex>
#include <unistd.h>
#include <cassert>
#include <cctype>
#include <random>
#define _USE_MATH_DEFINES
#define _GLIBCXX_DEBUG
using namespace std;
typedef long long ll;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int x, y;
cin >> x >> y;
if (y >= x * 2 && y <= x * 4)
{
cout << "Yes" << endl;
}
else
{
cout << "No" << endl;
}
return 0;
}
