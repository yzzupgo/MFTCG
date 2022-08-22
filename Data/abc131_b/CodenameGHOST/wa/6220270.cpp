#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define ff first
#define ss second
#define vi vector<int>
#define br cout <<"\n";
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define tr(c,i) for(auto i :c)
#define pii pair< int,int >
#define Fast_IO() ios_base::sync_with_stdio(false);cin.tie(0)
#define pq priority_queue< pair<ll,pii> ,vector<pair<ll,pii>>,greater <pair<ll,pii>> >p;
#define er(x) cout << x << " "
#define err(x,y) cout << x << " "<<y
const int MOD = 1000 * 1000 * 1000 + 7;
const int N = 100;
using namespace std;
clock_t time_p=clock();
void dem()
{
time_p=clock()-time_p;
cerr<<"Time Taken : "<<(float)(time_p)/CLOCKS_PER_SEC<<"\n";
}
int main()
{
Fast_IO();
ll n , l ;
cin >> n >>l ;
ll flavour = l * n + ( n * (n+1) / 2 ) - n ;
ll res =LONG_LONG_MIN,g=1;
for ( int i = 1 ; i <= n ; ++i)
if( res < abs(flavour-( l + i -1 )))res=abs(flavour-( l + i -1 )),g=i;
cout << flavour - ( l + g -1 );
return 0 ;
}
