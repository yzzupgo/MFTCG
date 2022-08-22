#include<iostream>
#include<string.h>
#include<map>
#include<math.h>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;
typedef long long ll;
const int maxn=1e5+200;
typedef long long ll;
ll n,ans=0;
int main()
{
scanf("%lld",&n);
for(int i=1;i<=n;i++)
{
ll x=i,a=0;
while(x)
{
x/=10;
a++;
}
if(a%2)
{
ans++;
}
}
printf("%lld\n",ans);
}
