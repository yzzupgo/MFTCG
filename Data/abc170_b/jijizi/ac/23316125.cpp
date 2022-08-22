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
if(i*2+(x-i)*4==y)
{
fals=1;
break;
}
}
if(fals)cout<<"Yes";
else cout<<"No";
return 0;
}
