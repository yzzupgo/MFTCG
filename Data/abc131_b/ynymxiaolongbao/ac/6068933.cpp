#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<unordered_set>
#include<unordered_map>
using namespace std;
typedef long long ll;
#define mod 1000000007
#define mad(a,b) a=(a+b)%mod;
int main(){
ll n,m; cin>>n>>m;
vector<ll> v;
for(int i=0;i<n;i++)v.push_back(i+m);
ll sum=0; for(int i=0;i<n;i++)sum+=v[i];
ll ans=1e17;
for(int i=0;i<n;i++){
ll cur=sum-v[i];
if(abs(cur-sum)<abs(ans-sum))ans=cur;
}
cout<<ans<<endl;
return 0;
}
