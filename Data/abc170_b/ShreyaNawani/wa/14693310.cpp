#include <iostream>
using namespace std;
int main()
{
int x,y;
scanf("%d%d",&x,&y);
int a=(y-(x*2))/2;
int b=((x*4)-y)/2;
if((a+b)==x && a>0 && b>0)
printf("yes");
else
printf("no");
}
