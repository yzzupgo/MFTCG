#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double D;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef pair<int,int> PII;
typedef pair<ll,ll> PLL;
typedef long double ld;
#define rd(x) scanf("%d",&x)
#define rd2(x,y) scanf("%d %d",&x,&y)
#define rl(x) scanf("%lld",&x)
#define rl2(x,y) scanf("%lld %lld",&x,&y)
#define wd(x) printf("%d" ,x)
#define wd2(x,y) printf("%d %d",x,y)
#define wl(x) printf("%lld",x)
#define wl2(x,y) printf("%lld %lld",x,y)
#define PC(x) putchar(x)
#define GC() getchar()
#define NL printf("\n")
#define SP printf(" ")
#define SZ(a) (int)a.size()
#define ALL(a) a.begin(), a.end()
#define ITER(it,a) for (__typeof(a.begin()) it = a.begin(); it != a.end(); it++)
#define FILL(a,value) memset(a, value, sizeof(a))
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL)
#define fr(i,s,e) for(int i=s;i<e;i++)
#define frl(i,s,e) for(ll i=s;i<e;i++)
#define frr(i,s,e) for(int i=s-1;i>=e;i--)
#define frv(i,a) for(int i = 0;i<(int)a.size();i++)
#define frvr(i,a) for(int i = a.size()-1;i>=0;i--)
#define tr(i,a) for(typeof(a.begin()) i = a.begin(); i != a.end();i++)
#define inf 10000000000000
#define mod 1000000007
#define maxn 100009
#define maxr 100009
int main(){
ll n;
rl(n);
ll ans=0;
if(n<10)
ans=n;
else if(n<100)
{
ans=9;
}
else if(n<1000)
{
ans=9+(n-99);
}
else if(n<10000)
{
ans=9+(999-99);
}
else if(n<=100000)
{
ans=9+(999-99)+(n-9999)-1;
}
wl(ans);
NL;
return 0;
}
