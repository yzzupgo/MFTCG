#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <iomanip>
#include <random>
#include <fstream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;
int main(void)
{
int x, y;
cin >> x >> y;
for(int i = 0; i <= x; i++)
{
if(2*(i)+4*(x - i) == y)
{
cout << "Yes";
return 0;
}
}
cout << "No";
}
