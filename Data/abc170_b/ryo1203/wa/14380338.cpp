#include <iostream>
#include <vector>
using namespace std;
int main()
{
int leg[2] = {2,4};
int x,y;
cin >> x >> y;
vector<int> p(x,leg[0]);
bool flg = false;
for (int i = 0; i < x; i++)
{
int sum = 0;
for (int j = 0; j < x; j++)
{
sum += p[j];
}
if (sum == y)
{
flg = true;
break;
}
p[i] = leg[1];
}
if (flg)
{
cout << "Yes";
}
else
{
cout << "No";
}
}
