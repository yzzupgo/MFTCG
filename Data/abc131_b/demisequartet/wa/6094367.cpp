#include <stdio.h>
#include <stdlib.h>
int abs(int n){
if(n > 0){
return n;
}else{
return -n;
}
}
int min(int ary[],int n){
int min = abs(ary[0]);
int i;
for(i = 0 ; i < n; i++){
ary[i] = abs(ary[i]);
if(min > ary[i]){
min = ary[i];
}
}
return min;
}
int sum(int ary[],int n){
int sum = 0;
for(int i = 0; i < n; i++){
sum += ary[i];
}
return sum;
}
int main(void)
{
int n,l;
scanf("%d%d",&n,&l);
int taste[n],i;
for(i = 0; i < n; i++){
taste[i] = n + i;
}
int total = sum(taste,n);
int a = min(taste,n);
printf("%d\n",total - a);
return 0;
}
