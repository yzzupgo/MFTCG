#include<stdio.h>
int main(void)
{
int a,b;
scanf("%d %d",&a,&b);
if(a<6){
printf("0\n");
return 0;
}
else if(a<13)b/=2;
printf("%d\n",b);
return 0;
}
