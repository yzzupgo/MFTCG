#include<stdio.h>
int main(){
int a,b;
scanf("%d%d",&a,&b);
int x,y,z;
x=a+b;
y=a-b;
z=a*b;
if(x>=y||x>=z){
printf("%d\n",x);
}
else if(y>=x||y>=z){
printf("%d\n",y);
}
else{
printf("%d\n",z);
}
}
