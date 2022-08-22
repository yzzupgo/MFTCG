#include<stdio.h>
int main()
{
int A,B,C;
scanf("%d%d",&A,&B);
if(A>=0 && B>=0 || A<0 && B<0)
{
C=A*B;
}
if(A>0 && B<0)
{
C=A-B;
}
if(A<0 && B>0)
{
C=A+B;
}
printf("%d",C);
return 0;
}
