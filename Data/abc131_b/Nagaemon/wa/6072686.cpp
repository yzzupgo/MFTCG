#include<stdio.h>
#include<stdlib.h>
int main(){
int n,l,i,j;
scanf("%d %d",&n,&l);
if(l<=0&&l+n-1>=0){
j=0;
}
if(l>=0){
j=l;
}
else{
j=l+n-1;
}
int k=n*l+n*(n-1)/2;
printf("%d",k-j);
}
