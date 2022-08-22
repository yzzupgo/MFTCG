#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
#define dl "\n"
#define pb push_back
#define r_0 return 0
#define sz size
using namespace std;
const ll N = 10e9+5;
ll ans,sum,cnt,mus,p,mn=N,mx=-N;
int main ()
{
ll n;
cin>>n;
for(ll i=1; i<=n; i++)
{
ans=i;
while(ans)
{
ans/=10;
cnt++;
}
if(cnt%2==1)
{
sum++;
}
cnt=0;
}
cout<<sum<<dl;
}
