#include<bits/stdc++.h>
#include <sys/time.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ldo;
#define endl "\n"
#define pi 3.1415926535897932384626433832795
#define mod (ll)1000000007
#define pp pair<ll,ll>
#define vii vector<int>
#define vll vector<ll>
#define vpp vector<pp>
#define vss vector<string>
#define pb push_back
#define pob pop_back
#define mp make_pair
#define pf push_front
#define pof pop_front
#define eb emplace_back
#define ff first
#define ss second
#define bs(v,x) binary_search(v.begin(),v.end(),x)
#define ub(v,x) upper_bound(v.begin(),v.end(),x)
#define lb(v,x) lower_bound(v.begin(),v.end(),x)
#define print(A,n) for(ll i=0;i<n;++i)cout<<A[i]<<' ';cout<<endl;
#define take(A,n) for(ll i=0;i<n;++i)cin>>A[i];
#define set(x) memset(x,0,sizeof(x));
#define Sort(x) sort(x.begin(),x.end())
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define setd(s,s1,S1) set_difference(s.begin(),s.end(),s1.begin(),s1.end(),inserter(S1,S1.end()));
#define trace1(x) cout<<#x<<": "<<x<<endl
#define trace2(x,y) cout<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x,y,z) cout<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a,b,c,d) cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a,b,c,d,e) cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a,b,c,d,e,f) cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
#define trace(f) for(auto it=f.begin();it!=f.end();it++)cout<<*it<<" ";cout<<endl;
int main()
{
fast;
ll L=1;
while(L--){
ll x,y;
cin>>x>>y;
if(y-2*x>=0 && (y-2*x)%2==0 && 4*x-y>=0 && (4*x-y)%2==0)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
return 0;
}
