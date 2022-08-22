#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <stdlib.h>
#include <map>
#include <cmath>
#define MOD_P 1000000007
#define MOD_Q 998244353
#define PI 3.14159265358979
#define ll long long
using namespace std;
int main()
{
int a, b;
cin >> a >> b;
if (a * 4 < b || a*2 > b || b%2) {
printf("No");
} else {
printf("Yes");
}
return 0;
}
