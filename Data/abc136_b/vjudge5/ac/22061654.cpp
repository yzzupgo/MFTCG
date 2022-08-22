#include<stdio.h>
int main()
{
int n,m,ans,sum;
scanf("%d",&n);
m=n;
ans=0;
sum=0;
while(m)
{
m/=10;
ans++;
}
if(ans==1)
printf("%d\n",n);
else if(ans==2)
printf("9\n");
else if(ans==3)
printf("%d\n",n-100+1+9);
else if(ans==4)
printf("909\n");
else if(ans==5)
printf("%d\n",n-10000+900+10);
else
printf("90909\n");
}
