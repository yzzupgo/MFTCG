#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int a[101];
int main(){
int n,l;
scanf("%d %d",&n,&l);
int sum=0;
for(int i=1;i<=n;i++){
a[i]=l+i-1;
sum+=a[i];
a[i]=abs(a[i]);
}
sort(a+1,a+n+1);
sum-=a[1];
printf("%d\n",sum);
return 0;
}
