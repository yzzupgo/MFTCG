#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int a[101];
int main(){
int n,l;
scanf("%d %d",&n,&l);
int sum=0;
int minn=10000,x,y;
for(int i=1;i<=n;i++){
a[i]=l+i-1;
sum+=a[i];
x=abs(a[i]);
if(x<minn){
minn=x;
y=i;
}
}
sum-=a[y];
printf("%d\n",sum);
return 0;
}
