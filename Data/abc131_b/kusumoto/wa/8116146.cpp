#include<stdio.h>
int main(void)
{
int n,l,i,j,L[201],sum,a,s,e[201];
scanf("%d %d",&n,&l);
sum=0; a=0;
for(i=1;i<=n;i++){
L[i]=l+i-1;
sum=sum+L[i];
}
for(i=1;i<=n-1;i++){
for(j=i+1;j<=n;j++){
if(e[i]<e[i]){
a=e[i];
e[i]=e[j];
a=e[j];
}
}
}
for(i=1;i<=n;i++){
s=sum-e[1];
}
printf("%d\n",s);
return 0;
}
