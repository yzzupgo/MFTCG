#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>
using namespace std;
int a[10];
int main()
{
int x,y;
cin>>x>>y;
int i,j;
int fals=0;
for(i=0;i<=x;i++)
{
for(j=0;j<=x-i;j++)
{
if(2*i+4*j>y)break;
if(2*i+4*j==y)
{
fals=1;
break;
}
}
}
if(fals)cout<<"Yes";
else cout<<"No";
return 0;
}
