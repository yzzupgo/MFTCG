#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define rep(i,j,n) for(i=j;i<n;i++)
#define repi(i,j,n) for(i=j;i>n;i--)
#define inf 100001
#define M 1000000007
#define pie 3.141592653589793238
#define ll long long
#define ld long double
#define vll vector<long long>
#define vi vector<int>
#define pll pair<long long,long long>
#define pii pair<int,int>
#define vpii vector<pair<int,int> >
#define vpll vector<pair<long long,long long> >
#define pb push_back
#define pf pop_front
#define F first
#define S second
#define endl '\n'
using namespace std;
using namespace __gnu_pbds;
template<typename T>
using ordered_set=tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
ll power(ll a,ll m,ll mod){
ll ans=1;
while(m){
if(m%2){
ans*=a;
ans%=(mod);
}
a=(a*a)%(mod);
m>>=1;
}
return ans;
}
void init(ll* a,ll n,ll val){
for(ll i=0;i<n;i++)
a[i]=val;
}
void solve(){
ll i,j,k;
ll x,y;
cin>>x>>y;
if(x*2>y||x*4<y||y%2){
cout<<"No\n";
}else cout<<"Yes\n";
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll T=1;
while(T--){
solve();
}
return 0;
}
