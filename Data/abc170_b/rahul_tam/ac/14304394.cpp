#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef unsigned long long int ulli;
typedef long double ld;
#define S 1000001
#define M 1000000007
#define nl cout<<"\n";
#define er cout<<"\n***********\n";
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define test lli t; cin>>t; while(t--)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define Y cout<<"Yes\n";
#define N cout<<"No\n";
#define print(x) cout<<#x<<": "<<x<<endl;
#define print2(x,y) cout<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl;
#define print3(x,y,z) cout<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl;
#define print4(a,b,c,d) cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl;
#define print5(a,b,c,d,e) cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl;
#define print6(a,b,c,d,e,f) cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl;
int main()
{
fast
lli x,y,ans=-1;
cin>>x>>y;
for(lli i=0;i<=x;i++)
{
lli j=x-i;
if((2*i+4*j)==y)
{
ans=i;
break;
}
}
if(ans==-1)
{
N
}
else
{
Y
}
}
