#include <iostream>
using namespace std;
int main()
{
int x,y;
scanf("%d%d",&x,&y);
int a=(y-(x*2));
int b=((x*4)-y);
if(((a+b)/2)==x && a>=0 && b>=0)
printf("Yes");
else
printf("No");
}
