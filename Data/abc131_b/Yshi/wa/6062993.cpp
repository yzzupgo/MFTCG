#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
int n, l,min,sum=0;
cin >> n >> l;
vector<int> ap(n);
min = 100 + 200 - 1;
for (int i = 0; i < n; i++)
{
ap[i] = l + i;
if (abs(ap[i]) <= abs(min)) min = abs(ap[i]);
else
{
sum += ap[i];
}
}
cout << sum << endl;
return 0;
}
