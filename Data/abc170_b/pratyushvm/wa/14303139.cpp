#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vl vector<ll>
#define pb push_back
#define pll pair<ll,ll>
#define mp make_pair
#define ff first
#define ss second
#define rep(i,m,n) for(ll i=(m);i<(n);i++)
#define rem(i,m,n) for(ll i=(m);i>(n);i--)
const ll INF = 1e+10;
void solve()
{
ll n,l;
cin>>n>>l;
ll k;
k= (l-(2*n));
if(((k%2) == 0) && ((k/2) <= n))
{
cout<<"Yes";
}
else
{
cout<<"No";
}
}
int main()
{
fastio;
ll t=1;
while(t--)
{
solve();
}
#ifndef ONLINE_JUDGE
cout<<"\nTime Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec\n";
#endif
return 0;
}
