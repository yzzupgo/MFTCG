#include <bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define all(x) begin(x),end(x)
int mod = 1e9+7;
int inf = 4e18;
const int N = 5e5+5;
signed main()
{
io
int tt = 1;
while(tt--)
{
int x,y;
cin>>x>>y;
if((-y+4*x)>=0 and (-y+4*x)%2==0)
cout<<"Yes";
else
cout<<"No";
}
return 0;
}
