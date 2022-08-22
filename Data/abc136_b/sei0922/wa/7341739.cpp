#include<stdio.h>
int main(void) {
int n,ans=0,a=10;
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
printf("%d", n);
}
return 0;
}
