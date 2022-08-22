#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y,c=0;
cin>>x>>y;
if(x*4>=y&&y%2==0)
{
for(int i=0;i<=x-1;i++)
{
if(y%x==i)
{
c++;
break;
}
}
if(c==1||c==0)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
else
cout<<"No"<<endl;
return 0;
}
