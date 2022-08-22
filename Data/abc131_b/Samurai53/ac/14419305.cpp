#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,l,a=300,sum=0;
cin>>n>>l;
for(int i=1;i<=n;i++)
{
a=min(abs(l+i-1),a);
sum+=l+i-1;
}
if(sum>=0)
{
cout<<sum-a<<endl;
}
else
{
cout<<sum+a<<endl;
}
exit(0);
}
