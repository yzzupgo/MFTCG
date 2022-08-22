#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
int main(void)
{
int A, B;
int a,b,c;
a = A + B;
b = A - B;
c = A * B;
scanf("%d", &A,&B);
if (a >= b && a >= c) {
printf("%d", a);
}
else if (b >= a && b >= c) {
printf("%d", b);
}
else {
printf("%d", c);
}
return 0;
}
