#include<stdio.h>
int main()
{
int n,x;
scanf("%d%d",&n,&x);
int l=x;
int r=x+n-1;
int eat;
if(r<=0)eat=r;
else if(l>=0)eat=l;
else eat=0;
int answer=(l+r)*(r-l+1)/2-eat;
printf("%d\n",answer);
return 0;
}
