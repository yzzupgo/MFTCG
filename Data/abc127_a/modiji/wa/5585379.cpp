#include<bits/stdc++.h>
#define hell 1000000007
#define lcm(a,b) (a*b)/__gcd(a,b)
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define pll vector< pair<ll,ll> >
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define lbnd lower_bound
#define ubnd upper_bound
#define bs binary_search
#define F first
#define S second
#define rep(i,a,b) for(i=a;i<b;i++)
#define parr(a,n) for(ll it=0;it<n;it++) cout<<a[it]<<" ";cout<<endl;
#define pcont(a) for(auto it:a) cout<<it<<" ";cout<<endl;
#define ret(x) return cout<<x,0;
#define endl '\n'
#define MAXN 100005
#define PI 3.14159265358979323846
#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>void __f(const char* name, Arg1&& arg1){ std::cout << name << " : " << arg1 << '\n';}
template <typename Arg1, typename... Args>void __f(const char* names, Arg1&& arg1, Args&&... args){const char* comma = strchr(names + 1, ','); std::cout.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);}
#else
#define trace(...)
#endif
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
ll i,j,n,m,k,cnt=0,ans=0,t=1;
cin>>n>>m;
if(n>=13) ret(m)
if(n>=5 && n<13) ret(m/2)
ret(0)
return 0;
}
