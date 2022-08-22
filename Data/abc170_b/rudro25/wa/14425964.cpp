#include <bits/stdc++.h>
using namespace std;
#define inl(x) scanf("%lld",&x)
#define in(x) scanf("%d",&x)
#define mxx 10000000000000
#define mnn -10000000000000
#define Y() cout<< "Yes" <<endl
#define N() cout << "No"<<endl
#define endl "\n"
#define max_3(a,b,c) max(a, max(b,c))
#define max_4(a,b,c,d) max(a,max(b,max(c,d)))
#define min_3(a,b,c) min(a, min(b,c))
#define min_4(a,b,c,d) min(a,min(b,min(c,d)))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define loser return 0
#define ll long long
#define PI acos(-1)
#define mem(a,v) memset(a,v,sizeof(a))
#define SORT(v) sort(v.begin(),v.end())
#define REV(v) reverse(v.begin(),v.end())
#define O(x) cout<<x<<endl
#define B begin()
#define E end()
#define V vector
#define F first
#define S second
#define PSB push_back
#define EMB emplace_back
#define MP make_pair
#define PII pair<int,int>
#define MII map<int,int>
#define FAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
const ll MOD = 998244353;
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
#define bug1(a) cout<<a<<endl;
#define bug2(a,b) cout<<a<<" "<<b<<endl;
#define bug3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl;
ll power(ll n,ll p){if(p==0) return 1;if(p==1)return n;if(p%2)return power(n,p-1)*n;else{ll x=power(n,p/2);return x*x;}}
ll binpow(ll a, ll b){ll res = 1;while (b > 0) {if (b & 1)res*=a;a*=a;b>>=1;}return res;}
ll fact(ll num){ll fac=1;while(num!=1){fac=fac*num;num--;}return fac;}
string to_binary(int x) {string s;while(x > 0) {s += (x % 2 ? '1' : '0');x /= 2;}reverse(s.begin(), s.end());return s;}
ll nsum(ll num){return (num*(num+1))/2;}
const int N=2e5+5;
int main()
{
FAST();
ll test=1;
while(test--){
ll n,x,y;
string s;
cin>>x>>y;
if(y>(x*2) && y%2==0)
Y();
else N();
}
loser;
}
