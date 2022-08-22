#include<stdio.h>
int main(){
int n;
scanf("%d", &n);
int x=10,res=0;
while(x<n){
res += x-x/10;
x*=100;
}
if(n>=x/10) res += n-x/10+1;
printf("%d\n", res);
return 0;
}
