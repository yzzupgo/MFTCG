#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <map>
#include <functional>
#include <cmath>
#include <cstdint>
#include <mutex>
#include <thread>
#include <bitset>
using namespace std;
int main(void)
{
int x, y;
cin >> x >> y;
int i;
for ( i = 0; i < x; i++)
{
if (i * 2 + (x - i) * 4 == y)
{
break;
}
}
if (i<x)
cout << "Yes";
else
cout << "No";
system("pause");
return 0;
}
