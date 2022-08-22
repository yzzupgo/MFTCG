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
ll ans=0;
for(int i=1;i<n;i++){
ans+=m+i;
}
cout<<ans<<endl;
return 0;
}
