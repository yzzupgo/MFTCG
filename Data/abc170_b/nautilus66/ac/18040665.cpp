#include<bits/stdc++.h>
using namespace std;
#define inf 0x3f3f3f3f
#define mes(a,b) memset((a),(b),sizeof((a)))
#define syio std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#define lson l, mid, rt << 1
#define rson mid+1, r, rt << 1 | 1
#define lowbit(a) ((a)&-(a))
#define pb push_back
#define mkp make_pair
#define fi first
#define se second
typedef long long ll;
typedef long double real;
typedef unsigned long long ull;
typedef pair<int, int> pii;
const double pi = acos(-1.0);
const double eps = 1e-8;
const int mxn = 100033;
const int mod = 1e9 + 7;
inline int read(){
int x = 0,f = 1;char c = getchar();
while(!isdigit(c))f = c == '-' ? -1 : 1,c = getchar();
while(isdigit(c))x = x * 10 + c - '0',c = getchar();
return x * f;
}
inline ll gcd(ll a,ll b){return b==0?a:gcd(b,a%b);}
ll ksm(ll a,ll b,ll mod){ll ans=1;while(b){if(b&1) ans=(ans*a)%mod;a=(a*a)%mod;b>>=1;}return ans;}
ll inv2(ll a,ll mod){return ksm(a,mod-2,mod);}
void exgcd(ll a,ll b,ll &x,ll &y,ll &d){if(!b) {d = a;x = 1;y=0;}else{exgcd(b,a%b,y,x,d);y-=x*(a/b);}}
int dx[] = {0 , 1, 0 , -1};
int dy[] = {1 , 0, -1 , 0};
int x, y;
int main()
{
syio;
cin>>x>>y;
if (y & 1) cout<<"No"<<endl;
else
{
int t = y/2;
if (t < x|| 2*x < t) cout<<"No"<<endl;
else cout<<"Yes"<<endl;
}
return 0;
}
