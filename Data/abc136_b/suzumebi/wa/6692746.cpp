#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main(void){
int n;
int c;
c = 0;
scanf("%d",&n);
if(n >= 10){
c += 9;
}else{
c += n;
return 0;
}
if(n >= 1000){
c += 900;
}else if(n >= 100){
c += n - 99;
}
if(n >= 100000){
c += 90000;
}else if(n >= 10000){
c += n - 9999;
}
printf("%d\n",c);
return 0;
}
