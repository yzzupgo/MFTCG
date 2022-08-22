#include<bits/stdc++.h>
using namespace std;
#define ms(a,v) memset(a,v,sizeof a)
#define lll long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Read freopen("input.txt", "r", stdin)
#define Write freopen("output.txt", "w", stdout)
#define INF 1e18
void solve()
{
int a,b;
cin>>a>>b;
if(b%2!=0) cout<<"No"<<endl;
else if(b/2==a) cout<<"Yes"<<endl;
else if(b/4==a) cout<<"Yes"<<endl;
else
{
int A=a;
int B=b;
while(1)
{
b-=4;
a--;
if(b%2==0&&b/2==a) { cout<<"Yes"<<endl; return; }
if(a<=0||b<=0) break;
}
while(1)
{
B-=2;
A--;
if(B%4==0&&B/4==A) { cout<<"Yes"<<endl; return; }
if(A<=0||B<=0) break;
}
cout<<"No"<<endl;
}
}
int main()
{
fast
#ifndef ONLINE_JUDGE
#endif
solve();
}
