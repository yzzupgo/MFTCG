#include<bits/stdc++.h>
using namespace std;
#define maxn 110000
#define ll long long
void solve()
{
int n;
scanf("%d",&n);
int ss=0;
for(int i=1;i<=n;i++)
{
int p=i;
int s=0;
while(p>0)
{
s++;
p/=10;
}
if(s%2)ss++;
}
printf("%d\n",ss);
}
int main()
{
solve();
}
