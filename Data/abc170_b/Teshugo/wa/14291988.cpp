#include <bits/stdc++.h>
using namespace std;
#define sws ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define INFINITO 1000000000
#define ll long long
#define vi vector<int>
#define pb push_back
#define pii pair<int, int>
#define mp make_pair
#define ff first
#define ss second
#define vvi vector<vi>
#define all(x) x.begin(), x.end()
#define fo(i,n) for( int i = 0; i < n; i++ )
int main() {
int x, y;
cin >> x >> y;
for ( int i = 0; i <= x; i++ ) {
for ( int j = 0; i + j <= x; j++ ) {
if ( 2 * i + 4 * j == y ) {
cout << "Yes\n";
return 0;
}
}
}
cout << "No\n";
return 0;
}
