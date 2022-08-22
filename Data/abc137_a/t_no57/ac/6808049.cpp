#include<stdio.h>
int main()
{
int a,b,plus,minus,multi,res;
scanf("%d %d",&a,&b);
plus = a + b;
minus = a - b;
multi = a * b;
if(plus > minus)
{
if(plus > multi)
{
res = plus;
}
else
{
res = multi;
}
}
else if(multi > minus)
{
res = multi;
}
else
{
res = minus;
}
printf("%d\n",res);
return 0;
}
