#include <bits/stdc++.h>
using namespace std;
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize ("Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define mp make_pair
#define pu push
#define pp pop_back
#define in insert
#define ld long double
#define debug cout << "Hold right there sparky.....\n";
#define forn(low,high,i) for(i=low;i<high;i++)
#define forrev(high,low,i) for(i = high; i>= low;i--)
#define trace(x) cerr << #x << ": " << x << " " << endl;
#define zeroes(x) memset(x,0,sizeof(x))
typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
const ll mod =1e9+7;
const ll maxn=100000;
long long fe[32];
long long k;
void decToBinary(long long n)
{
memset(fe,-1,sizeof(fe));
long long i = 0;
while (n > 0) {
fe[i] = n % 2;
n = n / 2;
i++;
}
}
int main()
{
long long n,a,b,c,k,y;
cin>>n;
if(n<9 && n>0)
cout<<n;
else if( n<100)
cout<<9;
else if(n<1000 )
cout<<n-99+9;
else if(n<10000)
cout<<909;
else if(n<100001)
cout<<909+n-10000;
}
