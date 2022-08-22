#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y,c=0;
cin>>x>>y;
if(x*4<y&&y%x==0||y%2!=0)
cout<<"No"<<endl;
else
{
for(int i=1;i<=x-1;i++)
if(y%x!=i)
c++;
if(c==1)
cout<<"No"<<endl;
else
cout<<"Yes"<<endl;
}
return 0;
}
