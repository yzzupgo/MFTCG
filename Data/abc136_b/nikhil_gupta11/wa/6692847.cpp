#include<bits/stdc++.h>
using namespace std;
int check(int val)
{
int cnt=0;
while(val>0)
{
cnt++;
val=val/10;
}
if(cnt&1)
return 1;
return 0;
}
int main()
{
int n;
cin>>n;
int ans=0;
for(int i=1;i<n;i++)
{
if(check(i))
ans++;
}
cout<<ans;
}
