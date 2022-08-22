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
if((-100<=A)&&(100>=A)&&(-100<=B)&&(100>=B)){
if((A<0)&&(B<0)){
printf("%d",K);
}
if((A<0)&&(B>0)){
printf("%d",P);
}
if((A>0)&&(B<0)){
printf("%d",M);
}
if(((A==1)&&(B>0))||((A>0)&&(B==1))||((A==1)&&(B==1))){
printf("%d",P);
}else{
printf("%d",K);
}
if(((A==0)&&(B>0))||((A>0)&&(B==0))){
printf("%d",P);
}
if((A==0)&&(B<0)){
printf("%d",M);
}
if((A<0)&&(B==0)){
printf("%d",K);
}
}
}
