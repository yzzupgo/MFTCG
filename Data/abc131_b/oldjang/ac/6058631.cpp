#include <bits/stdc++.h>
#define inf 0x6fffffff
using namespace std;
const int N=5e6+10;
typedef long long ll;
int read(){
int x=0,f=1;char ch=getchar();
while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
return x*f;
}
int main()
{
int n=read(),l=read();
int mn=inf,now;
ll sum=0;
for(int i=1;i<=n;i++)
{
int x=i+l-1;
mn=min(abs(x),mn);
if(abs(mn)==abs(x))now=x;
sum+=x;
}
sum-=now;
cout<<sum<<endl;
return 0;
}
