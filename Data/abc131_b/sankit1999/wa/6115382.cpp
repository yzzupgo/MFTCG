#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define ll long long
#define pb push_back
#define mp make_pair
#define M LONG_LONG_MAX
#define IM INT_MAX
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main()
{
IOS;
string s;
ll n,l,i,j;
cin>>n>>l;
ll a[n+1];
for(i=1;i<=n;i++)
a[i]=l+i-1;
ll x=0;
for(i=2;i<=n;i++)
x+=a[i];
cout<<x;
}
