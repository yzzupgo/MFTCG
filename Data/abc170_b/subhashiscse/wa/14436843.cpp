#include<bits/stdc++.h>
using namespace std;
#define sf(a) scanf("%d",&a)
#define sf2(a,b) scanf("%d %d",&a,&b)
#define sf3(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define pf(a) printf("%d",a)
#define pf2(a,b) printf("%d %d",a,b)
#define pf3(a,b,c) printf("%d %d %d",a,b,c)
#define sfl(a) scanf("%lld",&a)
#define sfl2(a,b) scanf("%lld %lld",&a,&b)
#define sfl3(a,b,c) scanf("%lld %lld %lld",&a,&b,&c)
#define pfl(a) printf("%lld",a)
#define pfl2(a,b) printf("%lld %lld",a,b)
#define pfl3(a,b,c) printf("%lld %lld %lld",a,b,c)
#define nl printf("\n")
#define timesave ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define MPI map<int,int>mp;
#define fr(i,n) for(i=0;i<n;i++)
#define fr1(i,n) for(i=1;i<=n;i++)
#define frl(i,a,b) for(i=a;i<=b;i++)
#define tz 100000
#define clr0(a) memset(a,0,sizeof(a))
#define clr1(a) memset(a,-1,sizeof(a))
main()
{
timesave;
int n,m,tot,flag=0;
cin>>n>>m;
for(int i=1;i<=n;i++)
{
tot=i*2+(n-i)*4;
if(tot==m)
{
flag=1;
break;
}
}
if(flag==1)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
