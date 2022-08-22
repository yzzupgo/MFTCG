#include<stdio.h>
int main(void){
int A;
int B;
int P;
int M;
int K;
scanf("%d",&A);
scanf("%d",&B);
P=A+B;
M=A-B;
K=A*B;
if((P>=M)&&(M>=K)&&(P>=K)){
printf("%d",P);
}
if((M>=P)&&(P>=K)&&(M>=K)){
printf("%d",M);
}
if((K>=P)&&(P>=M)&&(K>=M)){
printf("%d",K);
}
}
