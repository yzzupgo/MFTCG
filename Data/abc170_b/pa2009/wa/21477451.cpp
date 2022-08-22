#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <complex>
#include <stack>
#include <queue>
#include <unordered_map>
#include <map>
using namespace std;
int main()
{
int X = 0;
int Y = 0;
cin >> X >> Y;
int a = X * 4;
string ans = "No";
for (int i = 0; i < X; i++)
{
if (Y == a)
{
ans = "Yes";
cout << ans << endl;
return 0;
}
a = a - 2;
}
cout << ans << endl;
return 0;
}
