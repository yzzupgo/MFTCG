#include <bits/stdc++.h>
#define rep(i,n) for ( ll i = 0; i < (n); ++i )
#define reps(i,n) for ( ll i = 1; i <= (n); ++i )
#define _rep(i,n) for ( ll i = (n) - 1; i >= 0; --i )
#define _reps(i,n) for ( ll i = n; i > 0; --i )
#define all(x) (x).begin(), (x).end()
#define _all(x) (x).rbegin(), (x).rend()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
int main( void )
{
ll x, y;
cin >> x >> y;
ll tmp = y - x * 2;
if ( ((tmp % 2) != 0) || (tmp > (x * 2)) ) {
cout << "No" << endl;
}
else {
cout << "Yes" << endl;
}
return 0;
}
