#include<bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(i=a;i<b;i++)
#define pb push_back
#define all(v) v.begin(),v.end()
#define F first
#define S second
#define vi vector < ll int >
#define CLR(a) memset((a),0,sizeof(a))
#define mp make_pair
#define hell 1000000007
using namespace std;
bool cnt(ll n)
{
int k=0;
while(n>0)
{
n/=10;
k++;
}
if(k%2) return true;
}
void solve()
{
ll i,j=0,r=200,p,q,k=0,ans=0,d,y=0,x,h,flag=0,n,m=0,a=hell,b=hell,id,c,h1,h2,a1,b1,w;
cin>>n;
rep(i,1,n+1)
{
y+=(cnt(i));
}
cout<<y;
}
signed main()
{
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t=1;
while(t--)
solve();
}
