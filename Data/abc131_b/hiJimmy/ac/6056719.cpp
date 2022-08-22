#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define sz(x) ((int)x.size())
using namespace std;
using ll=long long;
using pii=pair<int,int>;
int gcd(int a,int b) { return b==0?a:gcd(b,a%b); }
int lcm(int a,int b) { return a/gcd(a,b)*b; }
int32_t main()
{
ios::sync_with_stdio(false);
cin.tie(0);
int n,l; cin>>n>>l;
int mn=INT_MAX,tmp,tot=0;
For(i,1,n)
{
if(abs(l+i-1)<mn)
{
mn=abs(l+i-1);
tmp=l+i-1;
}
tot+=l+i-1;
}
cout<<tot-tmp<<"\n";
return 0;
}
