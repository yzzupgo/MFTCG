#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
scanf("%d%d",&x,&y);
for(int i=0;i<=x;i++)
{
int sum=i*2+(x-i)*4;
if(sum==y)
{
printf("YES\n");
return 0;
}
}
printf("NO\n");
return 0;
}
