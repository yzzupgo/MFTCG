#include<iostream>
#include<cstring>
#include<math.h>
#include<algorithm>
#include<queue>
#include<stack>
#include<cstdio>
#include<map>
#include<set>
#define si(a) scanf("%d",&a)
#define sl(a) scanf("%lld",&a)
#define sii(a,b) scanf("%d%d",&a,&b)
#define sll(a,b) scanf("%lld%lld",&a,&b)
#define queues priority_queue
#define mod 1000000007
#define mem(a) memset(a,0,sizeof(a));
#define def(a) ((a)&(-a))
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define mem(a,b) memset(a,b,sizeof(a));
typedef long long ll;
const ll maxn=10000006;
const ll INF=0x3f3f3f3f;
using namespace std;
inline char nc()
{
static char buf[100000],*p1=buf,*p2=buf;
return p1==p2&&(p2=(p1=buf)+fread(buf,1,100000,stdin),p1==p2)?EOF:*p1++;
}
inline ll read()
{
char ch=nc();
ll sum=0;
while(!(ch>='0'&&ch<='9'))ch=nc();
while(ch>='0'&&ch<='9')sum=sum*10+ch-48,ch=nc();
return sum;
}
bool cmp(ll a,ll b)
{
return a>b;
}
ll pri[100003];
ll sum1[100003];
int b[maxn];
ll sum;
void so()
{
for(ll i=2;i<=100003;i++)
{
if(!b[i])pri[++sum]=i;
for(ll j=1;j<=sum;j++)
{
if(i*pri[j]>100000)break;
b[i*pri[j]]=1;
if(i%pri[j]==0)break;
}
}
cout<<sum<<endl;
}
int main()
{
int a,b;
cin>>a>>b;
cout<<max(a*b,a-b);
}
