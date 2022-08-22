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
if (x * 2 > y)
printf("NO\n");
else if (y % 2 == 0)
{
b = y / 2 - x;
a = x - b;
if (a < 0 || b < 0)
printf("NO\n");
else
printf("YES\n");
}
else
printf("NO\n");
return 0;
}
