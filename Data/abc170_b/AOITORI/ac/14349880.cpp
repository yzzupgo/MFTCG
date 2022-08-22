#include <stdio.h>
int main(void)
{
long long body, legs, N, max, min;
scanf("%lld %lld", &body, &legs);
N = legs % 2;
max = body * 4;
min = body * 2;
if (N == 1)
{
printf("No");
}
else
{
if (legs >= min && legs <= max)
{
printf("Yes");
}
else
{
printf("No");
}
}
return 0;
}
