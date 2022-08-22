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
int x, y;
scanf("%d %d", &x, &y);
if (x * 2 > y)
printf("NO\n");
else if (y % 2 == 0)
{
if (y / 2 <= x * 2)
printf("YES\n");
else
printf("NO\n");
}
else
printf("NO\n");
return 0;
}
