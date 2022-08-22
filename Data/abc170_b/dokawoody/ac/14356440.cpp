#include<stdio.h>
int main(){
int i,s,sum,x,y;
bool flag=false;
scanf("%d %d",&x,&y);
for(i=x;0<=i;i--){
for(s=0;s<=x;s++){
sum=2*i+4*s;
if(sum==y && (i+s)==x){
flag=true;
break;
}
if(flag){
break;
}
}
}
if(flag){
printf("Yes");
}
else{
printf("No");
}
}
