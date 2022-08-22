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
else if(x*2==y)
cout<<"Yes"<<endl;
else if(x*4==y)
cout<<"Yes"<<endl;
else
{
int p = y/6;
y = y-(p*6);
if(y%2!=0)
{
cout<<"No"<<endl;
}
else
{
int res1 = y/4 , res2 = y/2;
if((res1+(2*p))==x || (res2+(2*p))==x)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
}
return 0;
}
