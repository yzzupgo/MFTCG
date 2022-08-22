#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,l,a=300,sum=0,zero=0;
cin>>n>>l;
for(int i=1; i<=n; i++)
{
a=min(abs(i+l-1),a);
if(a==0)
zero++;
sum+=(i+l-1);
}
if(zero!=0)
cout<<sum<<endl;
else
cout<<sum-a<<endl;
}
