#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char c[100005][10];
ll f[100005]={0},ans[100005];
int main ()
{
ll A,B,k=0,n,i,j,x;
scanf("%lld",&n);
for(i=0; i<n; i++)
{
scanf("%s",c[i]);
}
for(i=0; i<n; i++)
{
for(j=0; j<=9; j++)
{
f[k]+=((ll)pow(10,c[i][j]-'a'))%123456789;
}
k++;
}
sort(f,f+k+1);
x=0;
for(i=0; i<=k; i++)
{
if(f[i]==f[i+1])
{
ans[x]++;
}
else
{
x++;
}
}
ll an=0;
for(i=0; i<x; i++)
{
if(ans[i])
an+=(ans[i]+1)*ans[i]/2;
}
printf("%lld",an);
return 0;
}
