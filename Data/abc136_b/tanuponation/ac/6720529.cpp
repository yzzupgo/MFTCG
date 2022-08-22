#include <stdio.h>
int main(){
int N;
scanf("%d",&N);
if(N==100000){
printf("90909");
}else if(10000<=N && N<100000){
printf("%d",909+N-9999);
}else if(1000<=N && N<10000){
printf("909");
}else if(100<=N && N<1000){
printf("%d",9+N-99);
}else if(10<=N && N<100){
printf("9");
}else if(1<=N && N<10){
printf("%d",N);
}
}
