#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int a,b;
int main() {
scanf("%d%d",&a,&b);
int x=a+b,y=a-b,z=a*b;
printf("%d\n",max(max(x,y),z));
return 0;
}
