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
double a;
bool bool_which;
a = (4*x-y) / 2;
bool_which = is_integer(a);
if (a >= 0 && bool_which==true) {
cout << "Yes" << endl;
} else
{
cout << "No" << endl;
}
return 0;
}
