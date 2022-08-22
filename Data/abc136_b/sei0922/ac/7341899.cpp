#include<stdio.h>
int main(void) {
int n;
int ans = 0;
int a = 10;
scanf("%d", &n);
for (int i = 1; i <= n; i++)
{
if (i<a)
{
ans++;
}
if (i == a * 10)
{
ans++;
a *= 100;
}
}
printf("%d", ans);
return 0;
}
