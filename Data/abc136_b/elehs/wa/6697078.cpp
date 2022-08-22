#include<stdio.h>
int main(void){
int N;
int T;
int Y;
scanf("%d",&N);
if(N<=99){
printf("9");
}
if((N>=100)&&(N<=999)){
T=9+(N-99);
printf("%d",T);
}
if((N>=1000)&&(N<=9999)){
printf("909");
}
if((N>=10000)&&(N<=99999)){
Y=909+(N-9999);
printf("%d",Y);
}
if(N==100000){
printf("90909");
}
}
