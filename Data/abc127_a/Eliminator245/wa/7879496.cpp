#include <stdio.h>
int main ()
{
int A,B,y;
scanf ("%d %d",&A,&B);
if (A<5)
y=0;
else if (A>=6&&A<=12)
y=B/2;
else
y=B;
printf ("%d\n",y);
return 0;
}
