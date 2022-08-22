#include <cstdio>
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
int main()
{
int n;
scanf("%d\n", &n);
int ans = min(n, 9) + max(min(n, 999) - 99, 0) + max(min(n, 99999) - 9999, 0);
printf("%d\n", ans);
return 0;
}
