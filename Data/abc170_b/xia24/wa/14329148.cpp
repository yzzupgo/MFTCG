#include <stdio.h>
int main(){
int x,y;
scanf("%d%d",&x,&y);
for(int i=0;i<x;i++){
if(2*i+4*(x-i)==y){
printf("Yes") ;
return 0;
}
}
printf("No") ;
return 0;
}
