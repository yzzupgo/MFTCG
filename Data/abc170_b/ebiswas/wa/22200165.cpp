#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
using d = int;
using ll = long long;
using ud = unsigned int;
using ull = unsigned long long;
using lf = double;
using llf = long double;
using ch = char;
using st = string;
using bl = bool;
using vo = void;
#define ci cin
#define sf scanf
#define co cout
#define pf printf
#define f(i,x,n) for( d i = x; i < n; i++ )
#define fn(i,x,n) for( d i = x; i <= n; i++ )
#define wh while
#define w(n) while( n-- )
#define pd pair<d,d>
#define pll pair<ll,ll>
#define sda set<d>
#define sdd set<d,greater<d>>
#define slla set<ll>
#define slld set<ll,greater<ll>>
#define spd set<pair<d,d>>
#define spll set<pair<ll,ll>>
#define msda multiset<d>
#define msdd multiset<d,greater<d>>
#define mslla multiset<ll>
#define mslld multiset<ll,greater<ll>>
#define mspd multiset<pair<d,d>>
#define mspll multiset<pair<ll,ll>>
#define vd vector<d>
#define vll vector<ll>
#define vlf vector<lf>
#define vst vector<st>
#define vbl vector<bl>
#define v2d(b,n,m) vector<vector<d>> b(n,vector<d>(m));
#define v2ll(b,n,m) vector<vector<ll>> b(n,vector<ll>(m));
#define vpd vector<pd>
#define vpll vector<pll>
#define sz(x) x.size()
#define vsoa(x) sort( x.begin(), x.end() )
#define vsod(x) sort( x.rbegin(), x.rend() )
#define aso(x,n) sort( x, x+n )
#define cou(x,y) count( x.begin(), x.end(), y )
#define in insert
#define ct count
#define fi find
#define pb push_back
#define er erase
#define be begin
#define en end
#define ff first
#define ss second
#define mp make_pair
#define np next_permutation
#define el endl
#define nl co << el;
#define debug(x) co << "Debug of " << #x << ": " << x << el;
bl odd(ll num) { return (num & 1) == 1; }
bl even(ll num) { return !((num & 1) == 0); }
ll sum(ll n) { return ( (n*(n+1)) / 2 ); }
ll ceil(ll a,ll b) { return ( (a+(b-1)) / b ); }
vo InputOutput()
{
#ifndef ONLINE_JUDGE
freopen("E:/Programming File/input.txt", "r", stdin);
freopen("E:/Programming File/output.txt", "w", stdout);
#endif
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
}
void solve()
{
d x, y;
ci >> x >> y;
if( y / 2 == x )
co << "Yes" << el;
else if( y % 4 == 0 && y / 4 == x )
co << "Yes" << el;
else
{
wh( x > 0 && y > 0 )
{
y -= 4;
x--;
if( y / 2 == x )
{
co << "Yes" << el;
return;
}
}
co << "No" << el;
}
}
d main()
{
InputOutput();
d t = 1;
for( d test_case = 1; test_case <= t; test_case++ )
{
solve();
}
return 0;
}
