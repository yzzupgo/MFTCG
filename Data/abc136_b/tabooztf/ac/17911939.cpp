#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<ll(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=ll(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=ll(b);i--)
int func( int n )
{
if ( n < 10 ) return n;
int keta = 1,ans = 9;
for ( int i = n; i > 9; i /= 10 ) keta++;
rep(i,keta/2-1) ans = ans * 100 + 9;
int x = 9;
rep(i,keta-2) x = x * 10 + 9;
unsigned int y = n - x;
if ( keta % 2 == 1 ) ans += y;
return ans;
}
signed main( void )
{
int n;
cin >> n;
int ans = func(n);
cout << ans << endl;
}
