#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
ll x,y;
cin>>x>>y;
string ans="No";
for(int i=0;i<=x;i++)
{
ll temp=x-i;
if(i*2+temp*4==y)
{
ans="Yes";
break;
}
}
cout<<ans<<endl;
}
int main()
{
ll t;
t=1;
while(t--)
{
solve();
}
}
