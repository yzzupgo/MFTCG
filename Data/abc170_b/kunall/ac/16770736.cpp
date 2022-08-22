#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
int a,b,flag=0;
b=x-a;
for(int a=0;a<=x;a++)
{
if ((2 * a) + (4 * (x-a)) == y)
flag=1;
}
if(flag==1)
{
cout<<"Yes"<<"\n";
}
else
{
cout<<"No"<<"\n";
}
return 0;
}
