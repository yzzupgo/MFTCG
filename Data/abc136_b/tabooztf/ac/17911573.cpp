#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0;i<ll(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=ll(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=ll(b);i--)
int func( int n )
{
if ( n < 10 ) return n;
if ( n < 100 ) return 9;
if ( n < 1000 ) return 9 + n - 99;
if ( n < 10000 ) return 909;
if ( n < 100000) return 909 + n - 9999;
return 90909;
}
signed main( void )
{
int n;
cin >> n;
int ans = func(n);
cout << ans << endl;
}
