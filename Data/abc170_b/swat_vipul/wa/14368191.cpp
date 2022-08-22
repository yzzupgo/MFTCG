#include<iostream>
#include<set>
#include<algorithm>
#include<map>
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define rep(i,a,b) for (ll i = a; i < b; i++)
#define rev(i,b,a) for(ll i=b-1;i>=a;i--)
#define eqrep(i,b) for(ll i=1;i<=b;i++)
#define itrep(at) for (auto it = at.begin(); it != at.end(); it++)
#define ld long double
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define ipair pair<ll,ll>
#define umap unordered_map<ll,ll>
#define map map<ll,ll>
#define w(t) while (t--)
#define booster \
ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define mod 1000000007
#define endl "\n"
#define deb1(x) cout << #x << " : " << x << endl;
#define deb2(x,y) cout << #x << " : " << x << "\t" << #y << " : " << y << endl;
#define deb3(x,y,z) cout << #x << " : " << x << "\t" << #y << " : " << y << "\t" << #z << " : " << z << endl;
#define deb4(x,y,z,w) cout << #x << " : " << x << "\t" << #y << " : " << y << "\t" << #z << " : " << z << "\t" << #w << " : " << w << endl;
#define deb5(a,b,c,d,e) cout << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << endl;
#define deb6(a,b,c,d,e,f) cout << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << " | " << #f << ": " << f << endl;
using namespace std;
long long cost = 1e18;
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
booster;
ll n,total_legs;
cin>>n>>total_legs;
bool flag=true;
for(ll i=0;i<=total_legs/2;i++)
{
for(ll j=0;j<=total_legs/4;j++)
{
if(i+j==n&&(2*i+4*j)==total_legs)
{
flag=false;
}
}
}
if(!flag) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}
