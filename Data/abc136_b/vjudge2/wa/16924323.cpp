#include<stdio.h>
int main()
{
int n, i , x, y;
scanf("%d", &n);
if(n > 0 && n < 100)
printf("9\n");
else if(n > 99 && n <1000)
{
x = n - 90;
printf("%d\n",x);
}
else if(n > 999 && n < 10000)
{
printf("909\n");
}
else if(n >9999 && n < 100000)
{
y = n - 9090;
printf("%d\n", y);
}
else if(n == 100000)
printf("90909\n");
return 0;
}
