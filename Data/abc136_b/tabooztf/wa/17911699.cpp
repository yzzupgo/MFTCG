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
int ans = 9,i;
for( i = 999; i <= n; i = i * 100 + 99 )
{
ans = ans * 100 + 9;
}
ans += n - i / 10;
return ans;
}
signed main( void )
{
int n;
cin >> n;
int ans = func(n);
cout << ans << endl;
}
