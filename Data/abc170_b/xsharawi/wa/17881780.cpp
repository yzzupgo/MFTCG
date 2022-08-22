#include <bits/stdc++.h>
using namespace std;
typedef string s;
typedef long long ll;
typedef long double ld;
const ll inf = 1e18 + 10;
const ll minf = -(1e18 + 10);
const ll mod = 1e9 + 7;
#if !defined(ONLINE_JUDGE)
#include "debug.hpp"
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
#define pb push_back
#define all(x) x.begin(),x.end()
#define vl vector<ll>
#define vll vector<vector<ll> >
#define ins insert
#define speed ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int main(){
speed
ll x , y;
cin >> x >> y;
ll a , b , c , d;
a = x * 2;
b = x * 4;
c = ((x - 1 ) * 2 ) + 4;
d = ((x - 1 ) * 4 ) + 2;
if( y == a || y == b || y == c || y == d ){
cout << "Yes" << endl;
return 0;
}
cout << "No" << endl;
return 0;}
