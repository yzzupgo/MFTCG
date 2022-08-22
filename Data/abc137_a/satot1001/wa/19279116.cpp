#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
#include <functional>
#include <set>
#include <math.h>
#include <iomanip>
using namespace std;
const int MOD = 1000000007;
int main()
{
int a, b;
cin >> a >> b;
int plus = a+b;
int minus = a-b;
int mutti = a*b;
int maxRes = max(plus, minus);
maxRes = (mutti, maxRes);
cout << maxRes;
return 0;
}
