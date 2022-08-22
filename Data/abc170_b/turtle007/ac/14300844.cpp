#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dd;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define nl <<"\n"
#define con continue
#define br break
#define vll vector<ll>
#define vpll vector<pair<ll,ll> >
ll mx=INT_MAX;
ll mi=INT_MIN;
const ll MOD=998244353;
const ll inf = 0x3f3f3f3f;
const ll INF = 0x3f3f3f3f3f3f3f3fLL;
#define io { ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0); }
#define cer cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
int main()
{
io;
ll n,i,j,k,x,y;
cin>>x>>y;
if(y%2==0 && y>=2*x && y<=4*x)
{
cout<<"Yes";
}
else{
cout<<"No";
}
cer;
}
