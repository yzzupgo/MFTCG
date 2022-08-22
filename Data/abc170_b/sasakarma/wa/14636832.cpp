#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main(void)
{
int x, y;
cin >> x;
cin >> y;
int val = 4 * x - y;
if (val >= 0 && val % 2 == 0)
{
if(2*x >= val/2){
cout << "Yes\n";
} else {
cout << "No\n";
}
}
else
{
cout << "No\n";
}
return 0;
}
