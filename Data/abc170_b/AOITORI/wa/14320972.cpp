#include <stdio.h>
int main(void)
{
int body, legs, N, max, min;
scanf("%d %d", &body, &legs);
N = legs % 2;
max = body * 4;
min = body * 2;
if (N == 1)
{
printf("NO\n");
}
else
{
if (legs >= min && legs <= max)
{
printf("Yes\n");
}
else
{
printf("No\n");
}
}
return 0;
}
