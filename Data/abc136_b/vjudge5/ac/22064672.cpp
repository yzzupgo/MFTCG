#include<iostream>
#include<string.h>
using namespace std;
int find(int s)
{
int len=0;
while(s)
{
len++;
s=s/10;
}
return len;
}
int main()
{
int n,len=0,s,ans=0,k=1;
cin>>n;
for(int i=1;i<=n;i++)
{
if(find(i)%2!=0)
ans++;
}
cout<<ans<<endl;
}
