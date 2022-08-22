#include<stdio.h>
int main(void) {
int N;
int T = 0;
scanf("%d",&N);
if(N <= 9){
T = N;
}else if(10<= N && N<= 99){
T = 9;
}else if(100<=N && N<=999){
T = 9 + (N -99);
}else if(1000<=N && N<=9999){
T = 909;
}else if(10000<=N && N<=99999){
T = 909 + (N - 9999);
}else if(N >= 100000){
T = 9909;
}
printf("%d",&T);
return 0;
}
