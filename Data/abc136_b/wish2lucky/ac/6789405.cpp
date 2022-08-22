#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+10;
int main()
{
int n;
int num=0;
scanf("%d",&n);
int u=n;
int sum=0;
int o=1;
int x=1;
while(n)
{
num++;
n/=10;
}
if(num%2==0)
{
for(int i=1;i<=num;i++)
{
o=o*10;
if(i%2==1)sum+=o-x;
x*=10;
}
printf("%d\n",sum);
}
else {
for(int i=1;i<num;i++)
{
o=o*10;
if(i%2==1)
sum+=o-x;
x=x*10;
}
sum+=u-o+1;
printf("%d\n",sum);
}
}
