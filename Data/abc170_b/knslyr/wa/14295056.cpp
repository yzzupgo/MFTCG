#include <cstdio>
int main(void)
{
int X, Y;
scanf("%d%d", &X, &Y);
int b2 = Y - 2 * X;
if(b2 < 0 || b2 % 2)
printf("NO");
else {
int a = X - b2 / 2;
if(a < 0) printf("NO");
else printf("YES");
}
}
