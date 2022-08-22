#include<bits/stdc++.h>
using namespace std;
int ans=1e9,n,l,s;
int main()
{
cin>>n>>l;
for(int i=l;i<l+n-1;i++)
{
s+=i;
if(abs(i)<ans)
{
ans=i;
}
}
cout<<s-ans;
return 0;
}
