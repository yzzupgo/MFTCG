#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
bool flag=false;
for (int i=0;i<=100;i++)
for (int j=0;j<=100-i;j++)
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
