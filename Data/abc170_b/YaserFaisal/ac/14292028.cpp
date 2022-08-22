#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define vso(x) sort( x.begin() , x.end() )
#define vre(x) reverse( x.begin() , x.end() ) ;
#define aso(x) sort( x , x + x.size() )
#define are(x) reverse( x , x + x.size() )
#define print(x) cout << x << endl
#define no cout << "NO\n"
#define yes cout << "YES\n"
typedef long long ll ;
typedef unsigned long long ull ;
typedef long double ld ;
typedef pair<ll, ll> pairs ;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(NULL);
cout.tie(NULL);
ll x , y ; cin >> x >> y ;
if ( 2*x <= y && y <= 4*x && y % 2 == 0 ) cout << "Yes\n" ;
else cout << "No\n" ;
}
