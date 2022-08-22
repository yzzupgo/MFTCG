#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define ld long double
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define r0 return 0;
#define tc int t;cin>>t;while(t--)
#define for0(i,n) for (int i = 0; i < n; i++)
#define for1(i,n) for (int i = 1; i <= n; i++)
#define loop(i,a,b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vii vector<long long int>
#define SORT(v) sort(v.begin(),v.end());
#define PI 3.1415926535897932384626433832795
#define mod 1000000007
#define md 998244353
#define inf 1000000000000000
#define gcd __gcd
#define lcm(a,b) ((a)*(b))/gcd(a,b)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define crap ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
int min(int a,int b){
return (a<b)?a:b;
}
int max(int a,int b){
return (a>b)?a:b;
}
int fp(int a,int b){
if(b==0) return 1;
int x=fp(a,b/2);
x=(x*x)%mod;
if(b&1) x=(x*a)%mod;
return x;
}
int factorial(int n)
{
int fact=1;
for(int i=2;i<=n;i++)
fact=fact*i;
return fact;
}
int ncr(int n,int r)
{
return factorial(n)/(factorial(r)*factorial(n-r));
}
void c_p_c()
{
crap;
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
signed main()
{
c_p_c();
int x,y;
cin>>x>>y;
if(y&1)
cout<<"No"<<endl;
else if(y<=x)
cout<<"No"<<endl;
else if(y>(2*x) && y>(4*x))
cout<<"No"<<endl;
else
cout<<"Yes"<<endl;
}
