#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long
#define fr(i,p,n) for(ll i=p;i<n;i++)
#define fr1(i,p,n) for(ll i=p;i>=n;i--)
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define PI 3.14159265358979323846
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e9
#define precise cout << std::setprecision(12) << std::fixed;
#define endl "\n"
using namespace std;
int main()
{
FAST
int t=1;
while(t--)
{
int x,y;
cin>>x>>y;
int mn=x*2;
int mx=x*4;
if(y%2!=0) cout<<"NO"<<endl;
else
{
if(y>=mn && y<=mx) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
}
return 0;
}
