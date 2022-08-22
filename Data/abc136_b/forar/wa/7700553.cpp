#include <cstdio>
int main()
{
int n;
scanf("%d", &n);
int ans = (n <= 9 ? n : 9) + (n <= 999 ? n - 99 : 900) + (n <= 99999 ? n - 9999 : 90000);
printf("%d\n", ans);
return 0;
}
