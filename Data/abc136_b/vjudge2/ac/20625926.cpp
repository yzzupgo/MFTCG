#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define p_b pop_back
#define pf push_front
#define p_f pop_front
#define fr first
#define sc scanf
#define pf printf
#define fr first
#define sc second
#define TIME ios_base::sync_with_stdio(0)
#include<ctgmath>
#include<vector>
#include<algorithm>
#include<ctime>
#define ld long double
#define quluq
#define Amo
#define zard
#define zoha
#define mehkh
#define st stoi
#define gov_baybi_gov
#define fr first
#define se second
#define r_0 return 0
#define TIME ios_base::sync_with_stdio(0)
using namespace std;
const ll N = 1e6 + 1 ;
const long long M=1e9+7 ;
const long long H=1e5+7 ;
const long long B=1e4+7 ;
const long long A=1e6+7 ;
set < ll > o ;
map <ll , ll> mp , pm ;
map <char , ll> hs ;
vector <ll> v , vc , ve ,vv ;
vector < char > vd ;
deque < ll > p , pe ;
deque <string> ts , ss , st , rs ;
deque <double> sd , ds ;
string s , g , w , h , s1 ;
double l ;
char z , u='a' ;
bool re , rt ;
deque<ll>e;
map < pair < ll , ll > , ll > aw , wa ;
ll cnt , ans , TT, n , a , b , c , q , m , t , d , temp , mn , mx , rem , sum , tt ;
ll used[N] ;
ll arr[ 10001 ] ;
int main()
{
TIME;
srand(time(NULL)) ;
cin >> n ;
for ( ll i = 1 ; i <= n ; i ++ )
{
a = i ;
string s;
while ( a != 0 )
{
s += ( a % 10 ) + 48 ;
a /= 10 ;
}
reverse( s.begin() , s.end() ) ;
if ( s.size() % 2 == 1 )
cnt ++ ;
}
cout << cnt ;
}
