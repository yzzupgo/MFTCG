#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pp pair<int,int>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define ld long double
#define al(a) (a).begin(),(a).end()
#define mk make_pair
#define check cout<<"?"<<endl;
ll MOD=1000000007;
ll mod=998244353;
int inf=1000001000;
ll INF=1e18+5;
int main() {
int n,l; cin>>n>>l;
int ans=(l-1)*n+n*(n+1)/2;
if(l*(l+n-1)>0) ans-=min(abs(l),abs(l+n-1));
cout<<ans<<endl;
}
