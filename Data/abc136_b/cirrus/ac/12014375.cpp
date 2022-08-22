#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
if(a<10) printf("%d",a);
else if(a<100) printf("9");
else if(a<1000) printf("%d",a-90);
else if(a<10000) printf("909");
else if(a<100000) printf("%d",a-9090);
else printf("90909");
return 0;
}
