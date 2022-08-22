#pragma GCC target ("avx2")
#pragma GCC optimize "trapv"
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#include <bits/stdc++.h>
#define input(a,n) for(ll i1=0;i1<n;i1++)cin>>a[i1]
#define ll long long
#define pi 2 * acos(0.0)
#define usll unordered_set<ll>
#define sll set<ll>
#define vll vector<ll>
#define mll map<ll,ll>
#define pll pair<ll,ll>
#define umll unordered_map<ll,ll>
#define S second
#define sz size()
#define all(v) v.begin(),v.end()
#define Y cout<< "Yes"<< "\n"
#define N cout<< "No"<< "\n"
#define F first
#define mp make_pair
#define pb push_back
#define pf push_front
#define ld long double
#define mod 1000000007
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll x,y,f=0;
cin>>x>>y;
for(ll i=0;i<=x;i++)
{
for(ll j=0;j<=x;j++)
{
if(i+j==x)
{
if(4*i+2*j==y)
{
f=1;
break;
}
}
}
}
if(f)
Y;
else
N;
return 0;
}
