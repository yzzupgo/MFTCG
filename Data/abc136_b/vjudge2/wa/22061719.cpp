#include<stdio.h>
#include<math.h>
int main()
{
int len,n,i,j,t,sum,k;
scanf("%d",&n);
t=n;len=0;
while(t>0)
{
t/=10;
len++;
}
sum=0;
for(i=len;i>0;i--)
{
if(i%2==1){
if(i==len) {
k=1;
for(j=0;j<len-1;j++) k*=10;
sum+=n-k+1;
}else if(i!=1){
k=1;for(j=1;j<i;j++) k*=10;
sum+=k+1;
}else{
sum+=9;
}
}
}
printf("%d\n",sum);
}
