#include<stdio.h>
int main(){
int X,Y;
scanf("%d%d",&X,&Y);
if(2 * X >= Y && Y % 2 == 0) printf("Yes\n");
else printf("No\n");
return 0;
}
