#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define endl '\n'
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define rep2(i,a,b) for(int i=int(a);i<int(b);i++)
#define pb emplace_back
#define all(x) (x).begin(),(x).end()
ll mod=1e9+7;
ll mod2=998244353;
const int INF=1e9;
signed main(){
ll n,l;
cin>>n>>l;
ll ans=0;
rep2(i,1,n)ans+=l+i;
cout<<ans<<endl;
}
