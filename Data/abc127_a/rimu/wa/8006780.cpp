#include<stdio.h>
int main(void)
{
int a,b;
scanf("%d %d",&a,&b);
if(13<=a){
printf("%d\n",b);
}
else if(6<=a&&12>=a){
printf("%d\n",b-50);
}
else{
printf("0\n");
}
return 0;
}
