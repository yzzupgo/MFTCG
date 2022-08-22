#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define endl "\n"
#define pb push_back
#define PI 3.1415926535897932384626433832795l
#define F first
#define S second
#define mp make_pair
#define f(i,n) for(int i=0;i<n;i++)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define gcd(a,b) __gcd((a),(b))
#define fill(a,value) memset(a,value,sizeof(a));
#define minn(v) *min_element(v.begin(), v.end());
#define maxx(v) *max_element(v.begin(), v.end());
#define print(x) cout<<(x)<<endl;
#define sum(v) +x accumulate(v.begin(), v.end(),x);
#define debug(x) cout<<#x<<'='<<(x)<<endl;
typedef pair<int,int> pii;
typedef vector<int> vi;
const int mod=1e9+7;
const int MOD=998244353;
signed main()
{
fastio;
cout << fixed << setprecision(12);
int T;
T=1;
f(tc,T)
{
int n,k;
cin>>n>>k;
set<int>a;
int s=0;
f(i,n)
{
a.insert(k+i);
s+=(k+i);
}
if(a.find(0)!=a.end())
{
print(s)
}
else
{
int k1=10000,k2=-10000;
for(int i=1;i<=1000;i++)
{
if(a.find(i)!=a.end())
{
k1=i;
break;
}
}
for(int i=-1;i>=-1000;i--)
{
if(a.find(i)!=a.end())
{
k2=i;
break;
}
}
if(abs(k1)<=abs(k2))
{
print(s-k1)
}
else
{
print(s+k2)
}
}
}
return 0;
}
