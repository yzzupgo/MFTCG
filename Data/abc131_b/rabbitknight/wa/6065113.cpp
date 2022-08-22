#include<iostream>
#include<numeric>
#include<math.h>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
#include<queue>
#include<iomanip>
#define fi first
#define se second
#define pb push_back
#define pii pair<int,int>
#define ll long long
#define pll pair<ll,ll>
#define rep(i,from,to) for(int i=from;i<to;i++)
#define repd(i,from,till) for(int i=from;i>=till;i--)
#define waste ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define inf 1e9+1
#define mod 1e9+7
#define inf1 1e18+1
#define pie 3.14159265358979323846
#define N 100005
using namespace std;
void solve(){
int n,l;
cin>>n>>l;
int tot=n*l+((n*(n+1))/2)-n;
cout<<tot<<endl;
if(l>0)cout<<tot-l<<endl;
else if(l<0&&abs(l)>=n)cout<<tot-(l+n-1)<<endl;
else if(l==0)cout<<tot-n<<endl;
else cout<<"0"<<endl;
}
int main()
{
waste;
int t;
t=1;
while(t--){
solve();
}
}
