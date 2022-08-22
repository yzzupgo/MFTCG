#include<bits/stdc++.h>
#define ll long long
#define pb(a) push_back(a)
using namespace std;
bool solve()
{
ll x,y;
cin>>x>>y;
ll t=y-2*x;
if(t<0) return false;
if(t%2!=0) return false;
ll c=x-t;
if(c<0) return false;
return true;
}
int main()
{
if(solve()) cout<<"YES\n";
else cout<<"NO\n";
}
