#include<map>
#include<queue>
#include<time.h>
#include<limits.h>
#include<cmath>
#include<ostream>
#include<iterator>
#include<set>
#include<stack>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
#define rep_1(i,m,n) for(int i=m;i<=n;i++)
#define mem(st) memset(st,0,sizeof st)
int read()
{
int res=0,ch,flag=0;
if((ch=getchar())=='-')
flag=1;
else if(ch>='0'&&ch<='9')
res=ch-'0';
while((ch=getchar())>='0'&&ch<='9')
res=res*10+ch-'0';
return flag?-res:res;
}
typedef long long ll;
typedef pair<int,int> pii;
typedef unsigned long long ull;
typedef pair<double,double> pdd;
const int inf = 0x3f3f3f3f;
bool st[10];
void solve()
{
int x,y;
cin>>x>>y;
y-=x*2;
if(y>x*4)
{
cout<<"No"<<endl;
return ;
}
if(y<0)
{
cout<<"No"<<endl;
return ;
}
if(y%2)
{
cout<<"No"<<endl;
return ;
}
cout<<"Yes"<<endl;
}
int main()
{
int t=1;
while(t--)
solve();
}
