#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int i,x;
if(n<10){
printf("%d",n);
}else if(n>=10&&n<100){
x=9;
printf("%d",x);
}else if(n>=100&&n<1000){
x=10+n%100;
printf("%d",x);
}else if(n>=1000&&n<10000){
x=909;
printf("%d",x);
}else{
x=10+999+n%10000;
printf("%d",x);
}
}
