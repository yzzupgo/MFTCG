#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll power(ll n)
{
ll prod=1;
for(ll i=1;i<=n;i++)
prod*=10;
return prod;
}
int main()
{
ll n,sum=0,cnt=0;
cin>>n;
ll temp = n,msb = 0;
while(temp)
{
if(temp/10==0)
msb=temp;
temp/=10;
cnt++;
}
if(cnt%2==0)
{
sum = (power(cnt)-1)/11;
}
else
{
sum = (power(cnt-1)-1)/11;
sum += (msb-1)*power(cnt-1) + (n%power(cnt-1) + 1);
}
cout<<sum;
return 0;
}
