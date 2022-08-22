#include <cstdio>
int main(void)
{
int X, Y;
scanf("%d%d", &X, &Y);
int b2 = Y - 2 * X;
if(b2 < 0 || b2 % 2)
printf("No");
else {
int a = X - b2 / 2;
if(a < 0) printf("No");
else printf("Yes");
}
}
