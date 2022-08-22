#include<bits/stdc++.h>
#define int long long
#define ll long long
#define pp pair<int,int>
#define mod 1000000007
#define trace(x) cerr<<#x<<": "<<x<<" "<<endl
#define trace2(x,y) cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x,y,z) cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define sa(a,n) for(int i =0 ; i<n ; i++) cin>>a[i]
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define scan() int n; cin>>n ; int a[n]; for(int i = 0 ; i<n ; i++) cin>>a[i]
#define print(a,n) for(int i = 0 ; i < n ; i++) cout<<a[i]<<' '
using namespace std;
int max(int x, int y)
{
return x>y ? x : y;
}
int min(int x, int y)
{
return x<y ? x : y;
}
void _(int&a , int b)
{
a=(a%mod+b%mod)%mod;
a=(a+mod)%mod;
}
ll cl(ll a,ll b)
{
return (a/b)+(!(!(a%b)));
}
int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll x,y;cin >>x >> y;
for(int i=0;i<=x;i++)
{
for(int j=0;j<=x;j++)
{
if(i+j==x and 2*i+4*j==y){cout << "Yes\n";return 0;}
}
}
cout << "No\n";
}
