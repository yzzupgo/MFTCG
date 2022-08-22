#include<stdio.h>
int main(){
int a,b;
scanf("%d%d",&a,&b);
int x,y,z;
x=a+b;
y=a-b;
z=a*b;
if(x>=y&&x>=z){
printf("%d\n",x);
}
else if(y>=z&&y>=x){
printf("%d\n",y);
}
else if(z>=x&&z>=y){
printf("%d\n",z);
}
printf("%d%d%d",x,y,z);
}
