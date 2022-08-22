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
bool st = false;
for(int i = 0; i < x + 1; i++)
{
if(2*i + 4*(x-i) == y)
{
cout << "Yes";
st = true;
}
}
if(!st)
{
cout << "No";
}
}
