#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define pb push_back
#define f first
#define s second
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int x,y;
cin>>x>>y;
if(y%2!=0)
cout<<"No"<<endl;
else
{
int cnt=0 , cnt1=0 , cnt2=0;
while(y>=6)
{
cnt+=2;
y-=6;
}
while(y)
{
if(y%4==0)
{
y-=4;
cnt1++;
}
else if(y%2==0)
{
y-=2;
cnt2++;
}
}
if(cnt1+cnt2+cnt==x)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
return 0;
}
