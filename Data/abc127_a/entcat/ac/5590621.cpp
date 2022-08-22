#include <bits/stdc++.h>
#define ll long long int
#define fin(x) scanf("%lld",&x)
#define fout(x) printf("%lld\n",x)
#define pll pair<ll,ll>
#define mp(x,y) make_pair(x,y)
#define cases int t; scanf("%d",&t); while(t--)
#define MOD 1000000007
#define MAXN 123456
#define read() freopen("lele.txt","r",stdin)
#define write() freopen("dede.txt","w",stdout)
using namespace std;
int main()
{
ll a, b;
fin(a); fin(b);
if(a >= 13)
{
fout(b);
exit(0);
}
if(a >= 6 && a <= 12)
{
fout(b / 2);
exit(0);
}
if(a <= 5)
{
fout(0LL);
exit(0);
}
return 0;
}
