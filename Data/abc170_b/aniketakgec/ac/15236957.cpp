#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int dp[100][100];
bool solve(int x,int y)
{
if(x==0 && y==0)
{
return true;
}
if(x<=0)
{
return false;
}
if(dp[x][y]!=-1)
return dp[x][y];
int ans=solve(x-1,y-2)||solve(x-1,y-4);
dp[x][y]=ans;
return ans;
}
int main()
{
fastio;
int x,y;
cin>>x>>y;
memset(dp,-1,sizeof(dp));
if(solve(x,y))
{
cout<<"Yes";
}
else
cout<<"No";
return 0;
}
