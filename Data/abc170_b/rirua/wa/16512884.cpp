#include<stdio.h>
int main(){
int x, y;
scanf("%d %d", &x, &y);
if(4*x > y && y%2==0) printf("Yes");
else printf("No");
return 0;
}
