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
if((P==0)&&(K==0)){
printf("0");
}
if(((P==0)&&(K!=0))||((K==0)&&(P!=0))){
if(((P>=M)&&(M>=K))||((P>=K)&&(K>=M))){
printf("%d",P);
}
if(((M>=P)&&(P>=K))||((M>=K)&&(K>=P))){
printf("%d",M);
}
if(((K>=P)&&(P>=M))||((K>=M)&&(M>=P))){
printf("%d",K);
}
}
}
