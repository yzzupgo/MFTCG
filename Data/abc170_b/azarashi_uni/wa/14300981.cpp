#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <utility>
#include <vector>
#include <list>
#include <algorithm>
#include <queue>
#include <map>
#include <unordered_map>
#include <limits>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int main()
{
ll X, Y;
scanf("%lld %lld", &X, &Y);
ll temp = Y - 2 * X;
if (temp % 2 == 0 && temp <= 2 * X)
printf("Yes");
else
{
printf("No");
}
}
