#include <stdio.h>
int main ()
{
int a,b,c1,c2,c3;
scanf("%i%i",&a,&b);
c1=a+b;
c2=a-b;
c3=a*b;
if (c1>c2 && c1>c3)
{
printf("%i",c1);
}
else if(c2>c3 && c2>c1)
{
printf ("%i",c2);
}
else if(c3>c2 && c3>c1)
{
printf("%i",c3);
}
else if (c1==c2 && c2==c3)
{
printf("%i",c1);
}
else if (c1==c2 && c1>c3)
{
printf("%i",c1);
}
else if (c1==c3 && c1>c2)
{
printf("%i",c1);
}
else if (c2==c3 && c2>c1)
{
printf("%i",c2);
}
return 0;
}
