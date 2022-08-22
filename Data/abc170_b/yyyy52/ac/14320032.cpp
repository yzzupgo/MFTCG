#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for (ll i = (a); i < (b); i++)
#define REP(i,n) rep(i,0,n)
void solve()
{
int x,y;cin>>x>>y;
if(y%2){cout<<"No"<<endl;return;}
cout<<(x>=((y+2)/4)&&x<=y/2?"Yes":"No")<<endl;
}
int main()
{
cin.tie(0);
ios::sync_with_stdio(false);
solve();
return 0;
}
