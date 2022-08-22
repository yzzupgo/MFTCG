#include <stdio.h>
#include <math.h>
int main(void)
{
int n;
scanf("%d", &n);
int l;
scanf("%d", &l);
printf("%d\n", (n-1)*(l-1) + n*(n+1)/2 - 1);
return 0;
}
