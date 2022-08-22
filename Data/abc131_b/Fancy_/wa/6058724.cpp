#include <bits/stdc++.h>
using namespace std;
int n,l;
int main()
{
int ans = 0;
scanf("%d%d",&n,&l);
for(int i = 1;i <= n - 1;i++)
{
ans += (l + i - 1);
}
printf("%d\n",ans);
return 0;
}
