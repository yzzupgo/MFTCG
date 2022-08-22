#include <stdio.h>
using namespace std;
typedef long long llong;
#define MAX 100
int main()
{
int X, Y;
int flag = 0;
scanf("%d%d", &X, &Y);
int tmp = Y / 2;
if (Y % 2 != 1 && 2 * X >= tmp && tmp >= X)
flag = 1;
printf(flag ? "Yes\n" : "No\n");
return 0;
}
