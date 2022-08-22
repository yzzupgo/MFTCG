#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include <cmath>
#include <iomanip>
#include <map>
#include <set>
using namespace std;
int main()
{
int a, b, l = -999999;
cin >> a >> b;
if(a+b > l)
{
l = a+b;
}
if(a-b > l)
{
l = a+b;
}
if(a*b > l)
{
l = a+b;
}
cout << l;
}
