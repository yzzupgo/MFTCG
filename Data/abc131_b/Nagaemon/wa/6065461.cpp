#include<stdio.h>
#include<stdlib.h>
int main(){
int n,l,i,j=999;
scanf("%d %d",&n,&l);
int a[n];
for(i=0;i<n;i++){
a[i]=l+i;
if(j>abs(a[i])){
j=a[i];
}
}
int k=n*l+n*(n-1)/2;
printf("%d",k-j);
}
