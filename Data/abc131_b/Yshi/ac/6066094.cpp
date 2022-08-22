#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
int n, l,min,sum=0,r=0;
cin >> n >> l;
vector<int> ap(n);
vector<int> pie;
min = 100 + 200 - 1;
for (int i = 0; i < n; i++)
{
static int fl = 0;
ap[i] = l + i;
if (abs(ap[i]) < abs(min))
{
if(fl==1)pie.push_back(r);
min = abs(ap[i]);
r = ap[i];
fl = 1;
}
else
{
pie.push_back(ap[i]);
}
}
for (auto x : pie)
{
sum += x;
}
cout << sum << endl;
return 0;
}
