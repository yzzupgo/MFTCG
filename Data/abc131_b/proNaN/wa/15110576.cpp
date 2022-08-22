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
for(int i=1;i<=n;i++)
{
ans=min(ans,(a-(i-1+l)));
}
cout<<ans<<endl;
}
