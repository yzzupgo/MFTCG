#include<stdio.h>
int main()
{
int num;
scanf("%d", &num);
if(num >= 1 && num <= 9)
printf("%d\n", num);
else if(num >= 10 && num <= 99)
printf("9\n");
else if(num >= 100 && num <= 999)
printf("%d\n", num + 10 - 100);
else if(num >= 1000 && num <= 9999)
printf("908\n");
else if(num >= 100000)
printf("918\n");
return 0;
}
