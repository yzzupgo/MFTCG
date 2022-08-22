#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <ctype.h>
using namespace std;
typedef long long int ll;
int main()
{
int x;
cin >> x;
int y;
cin >> y;
if(y / 4 <= x && y % 2 == 0)
{
cout << "Yes";
}
else
{
cout << "No";
}
}
