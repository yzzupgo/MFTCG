#include<bits/stdc++.h>
#define FOR(i,l,r) for(int i=l;i<=r;i++)
#define ROF(i,l,r) for(int i=l;i>=r;i--)
#define r(x) read(x)
#define rr(x,y) read(x);read(y)
#define rrr(x,y,z) read(x);read(y);read(z)
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define fi first
#define se second
#define sss(str) scanf("%s",str+1)
#define ls k<<1,l,mid
#define rs k<<1|1,mid+1,r
using namespace std;
typedef long long LL;
typedef pair<int,int> pt;
const int N = 2e5 + 5;
const int M = 2e3 + 5;
const int mod = 1e9 + 7;
const int INF = 2e9;
const double eps = 1e-7;
const double pi = acos(-1);
template <class T>
inline void read(T &x) {
char c;x = 1;
while ((c = getchar()) < '0' || c > '9') if (c == '-') x = -1;
T res = c - '0';
while ((c = getchar()) >= '0' && c <= '9') res = res * 10 + c - '0';
x *= res;
}
int n,m;
char str[N];
int f[N];
void solve(int cas)
{
rr(n,m);
int now=m-2*n;
if(now>=0&&now%2==0&&now/2<=n){
cout<<"Yes\n";
}
else{
cout<<"No\n";
}
}
int main()
{
int t;
t=1;
FOR(i,1,t){
solve(i);
}
return 0;
}
