#include<cstdio>
using namespace std;
int main()
{
int x,y;
scanf("%d%d",&x,&y);
int b=(y-2*x)/2;
int a=x-b;
if((a+b==x&&2*a+4*b==y)&&(a>=0)&&(b>=0))printf("Yes\n");
else printf("No\n");
return 0;
}
