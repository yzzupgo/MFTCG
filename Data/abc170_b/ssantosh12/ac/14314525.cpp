#include <iostream>
using namespace std;
int main()
{
int x,y,ans;
scanf("%d%d",&x,&y);
if(y<=x*4&&y>=x*2&&y%2==0) printf("Yes\n");
else printf("No\n");
}
