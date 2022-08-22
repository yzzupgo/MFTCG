#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,i,j,a,b,z=0,c,d;
scanf("%d%d",&a,&b);
for(i=0;i<=a;i++)
{
c=a-i;
d=c*4+i*2;
if(d==b)
z=1;
}
if(z==1)
printf("Yes\n");
else
printf("No\n");
}
