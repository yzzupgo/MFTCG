#include <bits/stdc++.h>
using namespace std;
int n,l;
int a[201];
int main()
{
int ans = 0;
scanf("%d%d",&n,&l);
int te = 0x7f7f7f7f;
int cou = 0;
for(int i = 1;i <= n;i++)
{
a[i] = (l + i - 1);
if(abs(a[i]) < te)
{
te = abs(a[i]);
cou = i;
}
}
for(int i = 1;i <= n;i++)
{
if(i != cou)
ans += a[i];
}
printf("%d\n",ans);
return 0;
}
