#include<stdio.h>
int main()
{
int n,i,j,count1,count2=0,d;
scanf("%d",&n);
for(i=1; i<=n; i++)
{
d=i;
count1=0;
while(d>0)
{
d/=10;
count1++;
}
if(count1%2!=0) count2++;
}
printf("%d",count2);
}
