#include<stdio.h>
int main(void)
{
int a,b;
scanf("%d%d",&a,&b);
if(a>=13) printf("%d\n",b);
else if(a>=6) printf("%d\n",b/2);
else if(a>=5) printf("0\n");
return 0;
}
