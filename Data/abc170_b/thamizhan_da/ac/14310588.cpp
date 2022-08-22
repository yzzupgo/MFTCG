#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef long double ld;
#define rep(i,a,b) for(i=a;i<b;i++)
#define pb push_back
#define F first
#define S second
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define hell 1000000007LL
#define all(a) (a).begin(),(a).end()
ll power(ll x, ll y, ll p){ ll res = 1;x = x % p;while (y > 0) {if (y & 1) res = (res*x) % p;y = y>>1;
x = (x*x) % p;} return res;}
const long double PI = acos(-1);
#define trace(x) cerr << #x << ": " << x << endl;
#define trace1(x) cerr << #x << ": " << x << endl;
#define trace2(x,y) cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x,y,z) cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a,b,c,d) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#define trace5(a,b,c,d,e) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << endl;
#define trace6(a,b,c,d,e,f) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << " | " << #f << ": " << f << endl;
ll euclid(ll x,ll y,ll a,ll b){
return (a-x)*(a-x)+(b-y)*(b-y);
}
void solve()
{
ld x,y;
cin>>x>>y;
ld a = (4*x-y)/2;
ld b = (y-2*x)/2;
if(a!=(int)a || b!=(int)b || a<0 || b<0)
cout<<"No";
else
cout<<"Yes";
}
int main()
{
ios;
ll t=1,i=1;
while(i<=t)
{
solve();
i++;
}
return 0;
}
