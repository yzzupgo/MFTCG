#include<bits/stdc++.h>
using namespace std;
int n,a,ans;
int main()
{
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
int len=1,ii=i;
for(int j=1;j<=6;j++)
{
if(ii/10<=0) break;
len++;
ii/=10;
}
if(len%2==1) ans++;
}
printf("%d",ans);
return 0;
}
