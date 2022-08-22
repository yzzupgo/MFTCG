#include<bits/stdc++.h>
using namespace std ;
typedef long long ll;
typedef pair<ll, ll> Pll;
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define deb(X) cout << (X) << endl
#define ASH(X) cout << (X) << " "
#define debug(x) cout << #x << " " << x << endl;
#define debug2(x,y) cout << #x << " " << x << " " << #y << " " << y << endl;
#define FOR(I,A,B) for(ll I = (A); I <= (B); I++)
#define RFOR(I,B,A) for(ll I = (B); I >=(A); I--)
#define MS0(X) memset((X), 0, sizeof((X)))
#define MS1(X) memset((X), -1, sizeof((X)))
#define SORT(c) (sort(c.begin(),c.end()))
#define SORT_UNIQUE(c) (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))
#define GET_POS(c,x) (lower_bound(c.begin(),c.end(),x)-c.begin())
#define CASES int ___T; cin >> ___T; for(int cs=1;cs<=___T;cs++)
#define FAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ll fx[] = {1, 1, 0, -1, -1, -1, 0, 1};
ll fy[] = {0, 1, 1, 1, 0, -1, -1, -1};
vector<ll>a1,b1,c1;
void Execute()
{ ll x, l,y;
cin >> x >> l;
bool ok = false;
FOR(i,1,x)
{
y = x-i;
if((i*2)+(y*4)==l){ ok = true; break;}
}
if(ok==false) deb("No"); else deb("Yes");
}
int32_t main()
{
FAST();
Execute();
}
