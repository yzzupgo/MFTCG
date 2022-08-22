#include <bits/stdc++.h>
#pragma GCC target("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unrolled-loops")
using namespace std;
#define inp "TestCode.inp"
#define out "TestCode.out"
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FileInOut freopen(inp,"r",stdin);freopen(out,"w",stdout);
#define pb push_back
#define mp make_pair
#define X first
#define Y second
#define pi acos(-1)
#define pii pair<int,int>
#define ppiii pair< pair <int,int> ,int>
#define INF 1000000
#define endl '\n'
#define ll long long
#define pq priority_queue
const int mod=1e9+7;
int test=1;
void nathan_on_osu()
{
FAST
#ifndef ONLINE_JUDGE
#endif
}
int n,l;
int a[110];
int sum=0;
int minDif=100000;
int ans;
int main()
{
nathan_on_osu();
cin>>n>>l;
for(int i=1;i<=n;i++)
{
a[i]=l+i-1;
sum+=a[i];
}
for(int i=1;i<=n;i++)
{
if(abs(a[i])<minDif)
{
minDif=a[i];
ans=sum-a[i];
}
}
cout<<ans;
}
