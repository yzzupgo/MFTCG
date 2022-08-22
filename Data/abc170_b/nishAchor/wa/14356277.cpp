#include<bits/stdc++.h>
using namespace std;
#define fRead(x) freopen("x.txt","r",stdin)
#define fWrite(x) freopen ("x.txt","w",stdout)
#define mt make_tuple
#define ld long double
#define ll long long
#define ull unsigned long long
#define ff first
#define ss second
#define pb push_back
#define INF 2e16
#define PI acos(-1.0)
#define mp make_pair
#define pii pair<int,int>
#define pll pair<LL,LL>
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(a,min(b,min(c,d)))
#define max4(a,b,c,d) max(a,max(b,max(c,d)))
#define SQR(a) ((a)*(a))
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define ROF(i,a,b) for(int i=a;i>=b;i--)
#define REP(i,b) for(int i=0;i<b;i++)
#define MEM(a,x) memset(a,x,sizeof(a))
#define ABS(x) ((x)<0?-(x):(x))
#define SORT(v) sort(v.begin(),v.end())
#define REV(v) reverse(v.begin(),v.end())
#define FASTIO ios_base::sync_with_stdio(0);cin.tie(nullptr);
bool SortbySecDesc(const pair<long long,long long > &a, const pair<long long,long long > &b)
{
return a.second>b.second;
}
bool sortinrev(const pair<int,int> &a,
const pair<int,int> &b)
{
return (a.first > b.first);
}
int main()
{
FASTIO;
ll x, y;
cin >> x >> y;
if(y%2==0)
{
if(y/2==x)
{
cout << "Yes" << endl;
return 0;
}
}
if(y%4==0)
{
if(y/4==x)
{
cout << "Yes" << endl;
return 0;
}
}
ll a1 = y/2;
ll baki1 = (y%2)/4;
if(baki1>0)
{
if((a1+baki1)==x)
{
cout << "Yes" << endl;
return 0;
}
}
ll b1 = y/4;
ll baki2 = (y%4)/2;
if(baki2>0)
{
if((b1+baki2)==x)
{
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
