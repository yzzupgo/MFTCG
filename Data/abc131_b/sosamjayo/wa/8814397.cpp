#include <stdio.h>
#include <math.h>
int main(void)
{
int n;
scanf("%d", &n);
int l;
scanf("%d", &l);
if(0 < l)
printf("%d\n", (n-1)*(l-1) + n*(n+1)/2 - 1);
if(l+n-1 < 0)
printf("%d\n", (n-1)*(l-1) + n*(n+1)/2 - n);
else
printf("%d\n", (n-1)*(l-1) + n*(n+1)/2);
return 0;
}
