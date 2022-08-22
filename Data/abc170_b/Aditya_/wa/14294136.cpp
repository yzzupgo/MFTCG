#include<bits/stdc++.h>
using namespace std ;
#define ll long long
#define null NULL
#define double dll
#define endl "\n"
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
ll mod = (ll)(1e9 + 7);
ll inf = (ll)(1e17 + 17);
int main () {
int x , y ;
cin >> x >> y ;
if (y > 4 * x) {
cout << "No" ;
return 0 ;
}
if (y % 2) {
cout << "No" ;
return 0 ;
}
if (y % 4 == 0 || y % 2 == 0) {
cout << "Yes" ;
return 0 ;
}
cout << "No" ;
return 0 ;
}
