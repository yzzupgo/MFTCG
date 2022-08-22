#include <iostream>
#include <stdio.h>
using namespace std;
int main(void){
int x,y;
scanf("%d %d",&x,&y);
if(((4*x)-y)>=0 && ((4*x)-y)%2==0){
printf("Yes");
}else{
printf("No");
}
}
