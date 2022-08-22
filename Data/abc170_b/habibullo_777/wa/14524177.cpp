#include<bits/stdc++.h>
#define ll long long
#define in freopen("input.txt", "r", stdin)
#define out freopen("output.txt", "w", stdout)
#define skorost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std ;
ll z , o , ans ;
ll N = 1e9 + 7 ;
int code( ){
int n , m ;
cin >> n >> m ;
for( int i = 0 ; i < n ; i ++ ){
for( int j = 0 ; j < n ; j ++ ){
if( ( i * 2 ) + ( j * 4 ) == m ){
cout << "Yes" << endl ;
return 0 ;
}
}
}
cout << "No" << endl ;
return 0 ;
}
int main(){ skorost ;
int tjk = 1 ;
while( tjk -- ){
code( ) ;
}
}
