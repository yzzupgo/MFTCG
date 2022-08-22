#include<iostream>
using namespace std;
int main()
{
int n,ans=0,f=1;
cin>>n;
for(int i=1;i<=n;i++)
{
if(i==10||i==100||i==1000||i==10000||i==100000)
f=!f;
if(f)
ans++;
}
cout<<ans;
return 0;
}
