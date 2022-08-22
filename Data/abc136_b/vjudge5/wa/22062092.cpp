#include<stdio.h>
int a[6]={0,10,10,100,1000,10000};
int main(){
int n,k=10,i=0;
int sum=0;
scanf("%d",&n);
while(n/k!=0){
k*=10;i++;}
i+=1;
if(i%2==1){
sum+=(n%a[i]+1);
if(i==5)
{
sum+=909;
}
if(i==3){
sum+=9;
}
printf("%d",sum);
return 0;
}
else
{
if(i==4)
printf("909");
else
printf("9");
}
}
