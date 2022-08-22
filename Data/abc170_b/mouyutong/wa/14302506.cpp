#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
bool flag=false;
for (int i=1;i<=1000;i++)
for (int j=1;j<=1000;j++)
{
if (i*2+j*4==y&&i+j==x)
{
flag=true;
break;
}
}
if (flag) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
return 0;
}
