#include<bits/stdc++.h>
using namespace std;
void solve()
{
int ans,x,y;
cin>>x>>y;
for(int i=1;i<=x;i++)
{
ans=x-i;
if(i*2+ ans*4==y)
{
cout<<"Yes"<<endl;
return ;
}
}
cout<<"No"<<endl;
}
int main()
{
int t = 1;
while(t--)
{
solve();
}
return 0;
}
