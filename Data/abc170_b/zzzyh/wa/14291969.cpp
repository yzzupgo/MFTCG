#include<bits/stdc++.h>
#define int long long
#define ld long double
#define ri register int
#define il inline
#define mk make_pair
#define pb push_back
#define fi first
#define se second
#define pii pair<int,int>
#define vi vector<int>
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(ri i=(a);i<=(b);++i)
#define per(i,a,b) for(ri i=(a);i>=(b);--i)
#define ls (x<<1)
#define rs (x<<1|1)
#define mid (l+r>>1)
#define db(x) cout << "#x:" << x << endl
#define dd() cout << "Out put!\n"
const int mod=1e9+7,eps=1e-6,pi=acos(-1.0),maxn=1000010;
const int inf=0x7f7f7f7f7f7f7f7f;
using namespace std;
int a[maxn],b[maxn],c[maxn];
string s;
signed main()
{
ios::sync_with_stdio(0);
int t=1;
while(t--)
{
int x,y;
cin >> x >> y;
if(y>=2*x&&y<=4*x)
cout <<"Yes";
else
cout <<"No";
}
return 0;
}
