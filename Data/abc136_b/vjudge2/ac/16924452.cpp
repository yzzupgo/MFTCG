#include<stdio.h>
int main()
{
int n, i , x, y,sum = 0;
scanf("%d", &n);
if(n > 0 && n < 10)
{
for(i = 0; i < n ; i++)
{
sum++;
}
printf("%d\n",sum);
}
else if(n >= 10 && n <= 99)
printf("9\n");
else if(n > 99 && n < 1000)
{
x = n - 90;
printf("%d\n",x);
}
else if(n > 999 && n < 10000)
{
printf("909\n");
}
else if(n > 9999 && n < 100000)
{
y = n - 9090 ;
printf("%d\n", y);
}
else if(n > 99999)
printf("90909\n");
return 0;
}
