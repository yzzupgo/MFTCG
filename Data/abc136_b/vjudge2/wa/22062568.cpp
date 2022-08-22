#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int n,len=0,s,ans=0;
cin>>n;
s=n;
while(s)
{
len++;
s=s/10;
}
int i=1,k=1;
if(len%2!=0)
{
for(int j=1;j<len;j++)
i=i*10;
ans+=n-i+1;
for(i=1;i<len-1;i++)
{
k=k*10;
if(i%2!=0)
ans+=k;
}
}
else if(len%2==0)
{
for(i=1;i<=len-1;i++)
{
if(i%2!=0)
{
k=k*10;
ans+=k;
}
}
}
cout<<ans-1<<endl;
}
