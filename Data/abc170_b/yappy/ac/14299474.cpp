#include <stdio.h>
#include <string.h>
int main()
{
int X, Y;
scanf("%d%d", &X, &Y);
int b = (Y - 2 * X) / 2;
int a = X - b;
if (a >= 0 && b >= 0 && a + b == X && 2 * a + 4 * b == Y) {
puts("Yes");
}
else {
puts("No");
}
return 0;
}
