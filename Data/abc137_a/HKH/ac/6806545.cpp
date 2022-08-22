#include<cstdio>
#define max(a,b) a>b?a:b
using namespace std;
int main() {
int a,b,s;
scanf("%d%d",&a,&b);
s=max(a+b,a-b);
s=max(a*b,s);
printf("%d",s);
return 0;
}
