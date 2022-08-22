#include <stdio.h>
int main(){
  int i,a[5]={},sum=0,min=9,flag=1;
  for(i=0;i<5;i++){
    scanf("%d",a+i);
  }
  for(i=0;i<5;i++){
    if(a[i]%10==0){
      sum+=a[i];
    }
    else{
      sum+=(a[i]/10+1)*10;
      if(a[i]%10<=min){
        min=a[i]%10;
        flag=0;
      }
    }
  }
  if(flag){
    min=0;
  }
  sum-=10-min;
  printf("%d\n",sum);
  return 0;
}
