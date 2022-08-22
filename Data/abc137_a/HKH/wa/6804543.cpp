#include<cstdio>
#define max(a,b) a>b?a:b
using namespace std;
int main() {
int a,b;
scanf("%d%d",&a,&b);
printf("%d",max(max(a+b,a-b),a*b));
return 0;
}
