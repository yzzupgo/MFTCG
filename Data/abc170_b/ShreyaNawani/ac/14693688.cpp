#include <iostream>
using namespace std;
int main()
{
int x,y;
scanf("%d%d",&x,&y);
int a=(y-(x*2));
if(a!=0)
a=a/2;
else
a=0;
int b=((x*4)-y);
if(b!=0)
b=b/2;
else
b=0;
if(((a+b))==x && a>=0 && b>=0)
printf("Yes");
else
printf("No");
}
