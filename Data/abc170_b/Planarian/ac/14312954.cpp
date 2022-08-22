#include<stdio.h>
int main(void){
int x,y;
scanf("%d %d",&x,&y);
if(y%2==1){
printf("No");
}else if(2*x<=y&&y<=4*x){
printf("Yes");
}else{
printf("No");
}
return 0;
}
