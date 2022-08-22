#include <bits/stdc++.h>
#define ll long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define fr(i,a,b) for(long long int i=a; i<b; i++)
#define pb push_back
#define mp make_pair
using namespace std;
signed main()
{
fast
ll x,y;
cin>>x>>y;
if((y-(2*x))%2==0 || ((4*x-y)%2==0))
{
if(y>(4*x)) cout<<"No\n";
else cout<<"Yes\n";
}
else cout<<"No\n";
}
