#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
int x,y;
scanf("%d%d",&x,&y);
if ((y%2==0) && (y>=2*x && y<=4*x))
printf("Yes\n");
else
printf("No\n");
return 0;
}
