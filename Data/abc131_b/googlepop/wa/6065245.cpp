#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
int n,l;
scanf("%d %d",&n,&l);
int sum=0;
for(int i=2;i<=n;i++)
sum+=l+i-1;
printf("%d\n",sum);
return 0;
}
