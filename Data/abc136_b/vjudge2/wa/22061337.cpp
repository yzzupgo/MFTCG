#include<stdio.h>
int main()
{
int n, i, j, a;
scanf("%d", &n);
if(n<10)
{
printf("%d\n", n-1);
}
else if(n<100)
{
printf("9\n");
}
else if(n<1000)
printf("%d\n", 9+n-100+1);
else if(n<10000)
printf("%d\n", 9+1000-100);
else if(n<100000)
printf("%d\n", 1009-100+n-10000+1);
else
printf("%d\n", 1009-100+99999-10000+1);
}
