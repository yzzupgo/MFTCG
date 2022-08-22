#include <stdio.h>
#include <math.h>
int main(void)
{
int n;
scanf("%d", &n);
int l;
scanf("%d", &l);
int a[n];
for (int i=0; i < n; i++){
a[i] = l + i;
}
int sum = 0;
for (int i=0; i < n; i++)
sum += a[i];
if(0 < a[0])
sum -= a[0];
else if(a[n-1] < 0)
sum -= a[n-1];
printf("%d\n", sum);
return 0;
}
