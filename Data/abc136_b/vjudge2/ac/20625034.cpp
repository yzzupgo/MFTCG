#include<bits/stdc++.h>
#include<fstream>
#define ll long long
#define ld long double
#define pb push_back
#define pf push_front
#define fr first
#define sc second
#define Qodirov_Kamoliddin ios_base::sync_with_stdio(0) ; cin.tie(NULL) ; cout.tie(NULL) ;
#define p_b pop_back
#define p_f pop_front
#define quluq return 0;
#define NO cout << "NO" << endl ;
#define no cout << "no" << endl ;
#define YES cout << "YES" << endl ;
#define yes cout << "yes" << endl ;
using namespace std ;
const ll N = 1e5 + 0 ;
ll n , cnt , ans , sum , x , y , l , r , a , b ;
void vkoshp()
{
cin >> n ;
for (ll i = 1 ; i <= n ; i ++ )
{
cnt = 0 ;
x = i ;
while (x)
{
cnt ++ ;
x /= 10 ;
}
if (cnt % 2 != 0)
ans ++ ;
}
cout << ans << endl ;
}
int main ()
{
Qodirov_Kamoliddin
ll Qu_l_uQ = 1 ;
while ( Qu_l_uQ -- )
vkoshp() ;
}
