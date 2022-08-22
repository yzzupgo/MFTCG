#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pii pair<int,int>
#define pll pair<ll, ll>
#define pil pair<int,ll>
#define pli pair<ll,int>
#define ppi pair<pii,int>
#define pip pair<int,pii>
#define ppp pair<pii,pii>
#define pdd pair<double, double>
#define f first
#define s second
#define MOD 1000000007
#define mkp make_pair
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define LOR(i,l,r) for (ll i=l;i<=r;i++)
#define FORD(i,r,l) for (int i=r;i>=l;i--)
#define LORD(i,r,l) for (ll i=r;i>=l;i--)
#define CL(x) memset(x,0,sizeof(x))
#define ALL(x) x.begin(), x.end()
#define SZ(x) (int)(x.size())
#define UI(x) (int)(x-'A')
#define LI(x) (int)(x-'a')
#define DI(x) (int)(x-'0')
#define LL_MAX (1LL<<60)
#define DB 0
#define DBG(x) if(DB)cout << #x << " : " << x << '\n'
#define PRALL(v) if(DB)for(auto it : v)cout<<v<<' '; NL;
#define NL cout<<'\n';
#define FND(S,x) (S.find(x)!=S.end())
#define bit(x,y) (!!(x&(1<<y)))
typedef long long ll;
typedef long double ld;
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
int A,B;
cin>>A>>B;
if( A*2<=B && B<=A*4 && B%2==0 )cout<<"Yes\n";
else cout<<"No\n";
return 0;
}
