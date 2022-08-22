#include<bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false);
#define FO cout.tie(NULL);
#define FI cin.tie(NULL);
const ll MOD = 1e9 + 7;
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};
using namespace std;
void vok()
{
FAST
FO
FI
}
ll gcd(ll a,ll b)
{
if(b==0)
return a;
return gcd(b,a%b);
}
ll lcm(ll a,ll b)
{
return ((a*b)/gcd(a,b));
}
vector<ll>pp;
void gen()
{
vector<bool>prime(33000,true);
prime[0]=prime[1]=false;
for(int p=0;p*p<=33000;p++)
{
if(prime[p]){
for(int i=p*p;i<=33000;i+=p)
prime[i]=false;
}
}
for(int i=0;i<33000;i++)
if(prime[i])
pp.push_back(i);
}
ll find(vector<int>&A,int n)
{
}
void solve()
{
ll n,m,x,y,a,b,k;
a=b=x=y=k=0;
ll ans=0,res=0;
cin>>x>>y;
for(int i=1;i<=x;i++)
{
ans=x-i;
if(i*2+ ans*4==y)
{
cout<<"Yes"<<endl;
return ;
}
}
cout<<"No"<<endl;
}
int main()
{
vok();
int t = 1;
while(t--)
{
solve();
}
return 0;
}
