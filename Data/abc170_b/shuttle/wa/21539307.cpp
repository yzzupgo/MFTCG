#include<bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false);
#define FO cout.tie(NULL);
#define FI cin.tie(NULL);
const ll MOD = 1e9 + 7;
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};
using namespace std;
void solve()
{
ll n,m,x,y,a,b,k;
a=b=x=y=k=0;
ll ans=0,res=0;
cin>>x>>y;
for(int i=1;i<=x;i++)
{
ans=x-i;
if(i*2+ ans*4==y)
{
cout<<"Yes"<<endl;
return ;
}
}
cout<<"No"<<endl;
}
int main()
{
int t = 1;
while(t--)
{
solve();
}
return 0;
}
