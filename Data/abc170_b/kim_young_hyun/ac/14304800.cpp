#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
#include<set>
#include<map>
using namespace std;
int main(void)
{
int x, y, a, b;
scanf("%d %d", &x, &y);
if (y % 2 == 0)
{
b = y / 2 - x;
a = x - b;
if (a < 0 || b < 0 || a > x || b > x)
printf("No\n");
else
printf("Yes\n");
}
else
printf("No\n");
return 0;
}
