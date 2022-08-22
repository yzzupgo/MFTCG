#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for( int i = 0 ; i < n ; i++ )
typedef long long ll;
int main() {
int n , l ;
cin >> n >> l ;
int ans = 0 ;
for( int i = n+l-1 ; i > l - 1 ; i-- ) ans += i ;
if( l >= 0 ) cout << ans - l << endl ;
else if( l < 0 && l + n < 0 )cout << ans- ( n+l-1 ) << endl ;
else if( l < 0 && l + n >= 0 )cout << ans<< endl ;
}
