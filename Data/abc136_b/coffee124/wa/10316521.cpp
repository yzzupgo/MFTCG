#include<iostream>
using namespace std;
int main()
{
int n,ans=0,weishu=0,tmp,counter=1;
cin>>n;
tmp = n;
while(tmp>0)
{
weishu++;
tmp/=10;
}
for(int i = 1;i<=weishu;i++)
{
if(i%2==1)
{
if(i==weishu)
ans+=(9*counter);
else
ans+=(n-counter+1);
}
counter*=10;
}
cout<<ans<<endl;
return 0;
}
