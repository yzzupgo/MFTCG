#include <bits/stdc++.h>
using namespace std;
int main()
{
int i,n,l,s=0,minn,pos;
scanf("%d%d",&n,&l);
for(i=1;i<=n;i++)
{
s+=l+i-1;
if(abs(l+i-1)<minn)
{
minn=abs(l+i-1);
pos=i;
}
}
printf("%d",s-l-pos+1);
return 0;
}
