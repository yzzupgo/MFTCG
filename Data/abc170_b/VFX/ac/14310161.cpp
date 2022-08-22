#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
int x,y;cin>>x>>y;
for(int i=1;i<=x;i++)
{
if((2*i+(4*(x-i)))==y ||((4*i+(2*(x-i)))==y))
{
cout<<"Yes";
return 0;
}
}
cout<<"No";
}
