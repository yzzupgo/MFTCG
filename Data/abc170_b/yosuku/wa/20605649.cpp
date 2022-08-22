#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>
#include <algorithm>
#include <stack>
#include <queue>
#include <utility>
#include <iomanip>
#include <cmath>
#include <set>
#define MOD 1000000007
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define lrep(i,n) for (long long i = 0; i < (long long)(n); i++)
using namespace std;
typedef long long ll;
int main()
{
int x, y;
cin >>x >> y;
for(int t = 0; t <= x; t++)
{
for(int k = 0; k <= x; k++)
{
if (t + k > x) continue;
if (t * 2 + k * 4 == y)
{
std::cout << "Yes" << std::endl;
return (0);
}
}
}
std::cout << "No" << std::endl;
}
