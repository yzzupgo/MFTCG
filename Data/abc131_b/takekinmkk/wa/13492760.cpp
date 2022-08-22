#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i,n) for(int i = 0 ; i < (n) ; i ++ )
#define mp(x,y) make_pair(x,y)
#define all(x) (x).begin(),(x).end()
using namespace std;
using ll = long long;
using vin=vector<int>;
using P = pair<int, int>;
const int inf=1e9+7;
const ll INF=1e18;
int main() {
int n,l;
cin>>n>>l;
int ans=0;
rep(i,n){
ans+=l+i+1;
}
if(l>0) ans-=l;
else if(n+l>0);
else ans+=l+n-1;
cout<<ans<<endl;
}
