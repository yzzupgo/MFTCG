#include <cstdio>
using namespace std;
int main()
{
int x, y;
scanf("%d%d", &x, &y);
if (y - 2 * x >= 0 && !(y & 1) && x - (y - 2 * x) / 2 >= 0) printf("YES\n");
else printf("NO\n");
return 0;
}
