#include <bits/stdc++.h>
#define P pair<int,int>
#define vv vector<vector<int>>
#define v vector<int>
#define rep(i,n) for(int i=0;i<(int)n;i++)
using namespace std;
int main()
{
int x,y;
cin >>x >>y;
for(int i=0;i<=x;i++)
{
for(int k=0;k<=x;k++)
{
if((i*2+k*4)==y)
{
printf("Yes");
return 0;
}
}
}
printf("No");
return 0;
}
