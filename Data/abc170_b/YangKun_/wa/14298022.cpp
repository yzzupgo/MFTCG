#include <stdio.h>
using namespace std;
#define ll long long
#define lowbit(a) ((a) & -(a))
#define clean(a,b) memset(a, b, sizeof(a))
const int mod = 1e9 + 7;
const int inf = 0x3f3f3f3f;
const int maxn = 2e5 + 9;
int _;
int main()
{
int x,y,flag=0;
scanf("%d%d",&x,&y);
if(y<2*x||y>4*x) flag=1;
if((y/2*x)*2*x!=y) flag=1;
if(flag) puts("No");
else puts("Yes");
return 0;
}
