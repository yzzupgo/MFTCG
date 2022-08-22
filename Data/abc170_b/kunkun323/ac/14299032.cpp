#include<cstdio>
using namespace std;
int main()
{
int a,b;
scanf("%d %d",&a,&b);
int x=(b-2*a)/2;
int y=(4*a-b)/2;
if((x+y==a)&&(4*x+2*y==b)&&(x>=0)&&(y>=0))
{
printf("Yes");
return 0;
}
printf("No");
return 0;
}
