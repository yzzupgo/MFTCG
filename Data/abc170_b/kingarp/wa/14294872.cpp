#include<bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(i=a;i<b;i++)
#define pb push_back
#define all(v) v.begin(),v.end()
#define F first
#define S second
#define hell 1000000007
using namespace std;
void solve()
{
int i,j,k,n,m;
int x,y;
cin>>x>>y;
for(i=0;i<1000;i++)
{
if((y-2*i)%4==0 and i+(y-2*i)/4==x)
{
cout<<"Yes"; return;
}
}cout<<"No";
}
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t=1;
while(t--)
solve();
}
