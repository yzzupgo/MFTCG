#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb(a) push_back(a)
#define pbp(a,b) push_back({a,b})
#define rep(p,a,b) for(int p=a;p<b;p++)
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
#define INF 0x3f3f3f3f
ll nextPowerOf2(ll n)
{
n--;
n |= n >> 1ll;
n |= n >> 2ll;
n |= n >> 4ll;
n |= n >> 8ll;
n |= n >> 16ll;
n++;
return n;
}
bool cmp(ll a,ll b)
{
return (a>b);
}
int main() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll n,i,j;
int x,y;
cin>>x>>y;
if(y%2==0 && y/2>=x)cout<<"Yes\n";
else cout<<"No\n";
return 0;
}
