#include<stdio.h>
int main()
{
int A,B,C,D,E;
scanf("%d%d",&A,&B);
C = A+B;
D = A-B;
E = A*B;
if(C>D && C>E)
printf("%d",C);
else if(D>C && D>E)
printf("%d",D);
else if(E>C && E>D)
printf("%d",E);
printf("\n");
return 0;
}
