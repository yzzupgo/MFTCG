#include<bits/stdc++.h>
#define ff first
#define ss second
#define pb push_back
#define mkp make_pair
#define int long long
#define fori(j,n) for(int i=j;i<n;i++)
#define forb(n,j) for(int i=n-1;i>=0;i--)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define PI 3.141592653589793
#define M 1000000007
using namespace std;
int fast(int a,int b)
{
int ans=1;
a=a%M;
if(a==0)
return 0;
while(b>0)
{
if(b&1)
{
ans=(ans*a)%M;
}
b>>=1;
a=(a*a)%M;
}
return ans;
}
int32_t main()
{
int x,y;
cin>>x>>y;
if((y-(x*2))%2==0 && (y-(x*2))<x)
cout<<"Yes";
else
cout<<"No";
return 0;
}
