#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
int n,l,a=0;
cin>>n>>l;
for(int i=1;i<=n;i++)
{
a+=i-1+l;
}
int ans=100000;
int res=0;
for(int i=1;i<=n;i++)
{
if(ans>abs(a-(a-(i-1+l))))
{
ans=abs(a-(a-(i-1+l)));
res=a-(i-1+l);
}
}
cout<<res<<endl;
}
