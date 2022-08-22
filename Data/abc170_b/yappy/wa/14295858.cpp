#include <stdio.h>
#include <string.h>
int main()
{
int X, Y;
scanf("%d%d", &X, &Y);
if ((Y - X) % 2 != 0) {
puts("No");
return 0;
}
int b = (Y - X) / 2;
int a = X - b;
if (a >= 0 && b >= 0) {
puts("Yes");
}
else {
puts("No");
}
return 0;
}
