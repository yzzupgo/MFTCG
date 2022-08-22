#include<stdio.h>
#include<stdlib.h>
int main(){
int n,l,i,j=50000,k=0;
scanf("%d %d",&n,&l);
int a[n];
for(i=0;i<n;i++){
a[i]=l+i;
if(j>abs(a[i])){
j=a[i];
}
k=k+a[i];
}
printf("%d",k-j);
}
