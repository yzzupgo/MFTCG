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
if((A==0)&&(B==0)){
printf("0");
}
if((A<0)&&(B<0)){
printf("%d",K);
}
if((A<0)&&(B>0)){
printf("%d",P);
}
if((A>0)&&(B<0)){
printf("%d",M);
}
if((A>0)&&(B>0)){
printf("%d",K);
}
if((A==0)&&(B>0)){
printf("%d",P);
}
if((A>0)&&(B==0)){
printf("%d",P);
}
if((A==0)&&(B<0)){
printf("%d",M);
}
if((A<0)&&(B==0)){
printf("%d",K);
}
}
