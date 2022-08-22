#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
#define inf 999999999999
#define mx 200005
#define gcd __gcd
#define pb push_back
#define mk make_pair
#define bs binary_search
#define ub upper_bound
#define lb lower_bound
#define endl "\n"
#define vl vector<ll>
#define vs vector<string>
#define non __builtin_popcount
#define ml map<ll, ll>
#define ms map<string , ll>
using namespace std;
bool isp[mx];
void sv(){
ll i,j;
memset(isp, true, sizeof(isp));
isp[1]= false;
for(i=2;i*i<mx;i++){
if(isp[i]){
for(j=i*i;j<mx;j+=i)
isp[j]= false;
}
}
}
ll powr(ll a,ll b)
{
ll res=1;
while(b)
{
if(b&1)res=(res*a)%mod;
a=(a*a)%mod;
b>>=1;
}
return res;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll n,l,i,j,x=inf, ans=0;
cin>>n>>l;
for(i=0; i<n; i++)
{
ans+= (l+i);
ll kk= abs(l+i);
if(kk< x)
{
x= kk;
}
}
ans-= x;
cout<<ans;
return 0;
}
