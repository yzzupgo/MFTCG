#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define pi pair<int,int>
#define f first
#define s second
const int nax=1e5+10,mod=1e9+7,inf=1e18;
void solve()
{
int a,b;
cin>>a>>b;
cout<<max({a+b,a-b,a*b});
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
#ifndef ONLINE_JUDGE
freopen("input.in", "r", stdin);
freopen("output.in", "w", stdout);
#endif
int tt=1;
cin>>tt;
for(int i=1;i<=tt;i++)
{
cout<<"Case #"<<i<<": ";
solve();
}
return 0;
}
