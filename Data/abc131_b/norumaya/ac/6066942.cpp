#include <stdio.h>
#include <math.h>
int main(){
int N,L,sum=0,ans=0;
scanf("%d %d",&N,&L);
for(int i=1;i<N+1;i++){
sum+=L+i-1;
}
if(L>=0){
printf("%d",sum-L);
return 0;
}
if(L+N-1<0){
printf("%d",sum-(L+N)+1);
}else{
printf("%d",sum);
}
return 0;
}
