#include<bits/stdc++.h>
#include <cctype>
#define ll long long int
#define PB push_back
#define GO ll t; cin>>t; while(t--)
#define G(t) cin>>t; while(t--)
#define ALLR(x) x.rbegin(), x.rend()
#define PII pair<ll ,ll >
#define VI vector<ll >
#define ALL(a) (a).begin(),(a).end()
#define F first
#define S second
#define PI 3.141592653589793238
#define SZ(x) (ll )x.size()
#define hell2 998244353
#define hell 1000000007
#define FO(i,a,b) for(i=a;i<b;i++)
#define FOREV(i,a,b) for(i=a;i>=b;i--)
#define lbnd lower_bound
#define ubnd upper_bound
#define BS binary_search
#define MP make_pair
#define LIM 100005
#define ARR(n,i,a) ll n,i;cin>>n;ll a[n];FO(i,0,n)cin>>a[i];
#define ARRK(k,n,i,a) int n,k,i;scanf("%d%d",&n,&k);ll a[n];FO(i,0,n)scanf("%lld",&a[i]);
using namespace std;
#define fio ios_base::sync_with_stdio(false);cin.tie(0);
int t;
int main()
{
fio
int x,y;
cin>>x>>y;
if(y<=4*x&&y>=2*x&&y%2==0)
cout<<"YES";
else
cout<<"NO";
return 0;
}
