#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
int A, B;
int p, d, m;
scanf("%d%d", &A, &B);
p = A + B;
d = A - B;
m = A * B;
if (p >= d&& p >= m)
printf("%d", p);
else if (d >= p&& d >= m)
printf("%d", d);
else
printf("%d", m);
}
