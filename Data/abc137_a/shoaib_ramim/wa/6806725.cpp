#include<stdio.h>
int main()
{
int a,b,sum,sub,mul;
scanf("%d %d",&a,&b);
sum=a+b;
sub=a-b;
mul=a*b;
if(sum>sub&&sub>mul) printf("%d\n",sum);
else if(sum>sub&&sum<mul) printf("%d\n",mul);
else printf("%d\n",sub);
}
