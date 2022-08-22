#include <iostream>
#include <string>
#include <stdio.h>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cfloat>
#include <math.h>
#include <stack>
#include <queue>
#include <cstdio>
#include <iomanip>
using namespace std;
#define ll long long
#define rep(i,n) for (int i = 0; i < n; i++)
bool is_integer(double x) {
return floor(x)==x;
}
int main()
{
int x, y;
cin >> x >> y;
int a, b;
string ans = "No";
rep(i, x+1) {
a = i;
b = x - a;
if (2*a + 4*b) {
ans = "Yes";
}
}
cout << ans << endl;
return 0;
}
