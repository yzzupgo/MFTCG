#include<iostream>
#define ll long long
using namespace std;
int main()
{
ll a,cnt=0;
cin>>a;
for(ll i=1; i<=a; i++)
{
ll n=0,num=i;
while(num)
{
n++;
num/=10;
}
if(n%2!=0)
{
cnt++;
}
}
cout<<cnt;
}
