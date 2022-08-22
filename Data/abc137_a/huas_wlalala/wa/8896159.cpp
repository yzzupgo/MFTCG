#include<stdio.h>
int main()
{
int M=0;
int A,B;
scanf("%d%d",&A,&B);
if(A+B>M)M=A+B;
if(A*B>M)M=A*B;
if(A-B>M)M=A-B;
printf("%d",M);
return 0;
}
