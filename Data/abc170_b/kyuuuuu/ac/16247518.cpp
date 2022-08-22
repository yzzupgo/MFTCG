#include<iostream>
int main()
{
int A, B;
scanf( "%d%d", &A, &B);
if((A*2<=B)&&(B<=A*4)&&(B%2==0))
printf("Yes");
else
printf("No");
}
