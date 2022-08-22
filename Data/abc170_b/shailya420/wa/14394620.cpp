#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y,c=0;
cin>>x>>y;
if(x*4>=y)
{
for(int i=1;i<=x-1;i++)
{
if(y%x!=i)
c++;
}
if(c==1)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
else
cout<<"No"<<endl;
return 0;
}
