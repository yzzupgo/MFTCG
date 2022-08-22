#include <stdio.h>
int main(){
int x,y,a,b,z;
scanf("%d%d",&x,&y);
z=y-2*x;
if(z%2){printf("No\n");return 0;}
b=z/2;
a=x-b;
if(a<0){printf("No\n");return 0;}
printf("Yes\n");
return 0;
}
