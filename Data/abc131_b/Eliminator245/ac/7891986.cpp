#include <stdio.h>
int main ()
{
int N,L;
scanf ("%d %d",&N,&L);
int a[N],i,min,ans,count=0;
for (i=0;i<N;i++)
{
a[i]=L+i;
}
min=a[0];
if (N==1)
ans = L;
else{
if (a[0]>=0){
for (i=0;i<N;i++)
{
if (a[i]<min&&a[i]>=0)
min=a[i];
}
}
else
{
for (i=0;i<N;i++)
{
if(i!=N-1)
{
if (a[i]>min&&a[i]>=0&&a[i+1]>a[i])
{
min=a[i];
break;
}
}
else
min=a[i];
}
}
for (i=0;i<N;i++)
{
count=count+a[i];
}
ans=count-min;
}
printf ("%d\n",ans);
return 0;
}
